/* <!-- copyright */
/*
 * aria2 - The high speed download utility
 *
 * Copyright (C) 2006 Tatsuhiro Tsujikawa
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 */
/* copyright --> */

#include <stdlib.h>
#include <sys/types.h>
#ifdef HAVE_UTIME_H
#  include <utime.h>
#endif // HAVE_UTIME_H
#include <unistd.h>

#include <vector>
#include <cstring>
#include <cstdio>

#include "util.h"
#include "A2STR.h"
#include "array_fun.h"
#include "Logger.h"
#include "LogFactory.h"
#include "fmt.h"
#include "File.h"

#ifdef _WIN32
#include <shellapi.h>
typedef int (WINAPI *SHFileOperationWPtr)(LPSHFILEOPSTRUCTW lpFileOp);

#ifdef _MSC_VER
inline bool S_ISDIR(const int mode)
{
  return (mode & S_IFMT) == S_IFDIR; // Directory.
}


inline bool S_ISREG(const int mode)
{
  return (mode & S_IFMT) == S_IFREG;  // File.
}


inline bool S_ISCHR(const int mode)
{
  return (mode & S_IFMT) == S_IFCHR;  // Character device.
}


inline bool S_ISFIFO(const int mode)
{
  return (mode & S_IFMT) == _S_IFIFO; // Pipe.
}


inline bool S_ISBLK(const int mode)
{
  return false;                       // Block special device.
}


inline bool S_ISSOCK(const int mode)
{
  return false;                       // Socket.
}


inline bool S_ISLNK(const int mode)
{
  return false;                      // Symbolic link.
}
#endif  // end MSVC

#else  // !_WIN32

#include <sys/stat.h>
#include <dirent.h>
// 函数声明
int remove_directory(const char *path);

// 检查是否有权限删除文件或目录
static int can_remove(const char *path) {
    return access(path, W_OK) == 0;
}

// 尝试修改文件或目录的权限，以便可以删除
static int make_removable(const char *path) {
    struct stat statbuf;
    if (stat(path, &statbuf) == -1) {
        return -1;
    }
    // 尝试添加写权限
    mode_t new_mode = statbuf.st_mode | S_IWUSR;
    if (chmod(path, new_mode) == -1) {
        return -1;
    }
    return 0;
}

// 递归删除目录内容，处理权限问题
static int remove_directory_contents(const char *path) {
    DIR *dir = opendir(path);
    struct dirent *entry;
    struct stat entry_stat;
    char full_path[1024];

    if (dir == NULL) {
        return -1;
    }

    while ((entry = readdir(dir)) != NULL) {
        // 跳过'.'和'..'目录
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }

        // 构建完整的文件路径
        snprintf(full_path, sizeof(full_path), "%s/%s", path, entry->d_name);

        // 获取文件状态
        if (stat(full_path, &entry_stat) == -1) {
            continue;
        }

        // 检查是否有权限删除，如果没有则尝试修改权限
        if (!can_remove(full_path)) {
            if (make_removable(full_path) == -1) {
                continue;
            }
        }

        // 如果是文件，则删除
        if (S_ISREG(entry_stat.st_mode)) {
            if (::remove(full_path) == -1) {
                closedir(dir);
                return -1;
            }
        }
        // 如果是目录，则递归删除
        else if (S_ISDIR(entry_stat.st_mode)) {
            if (remove_directory(full_path) == -1) {
                closedir(dir);
                return -1;
            }
        }
    }
    closedir(dir);
    return 0;
}

// 递归删除目录
int remove_directory(const char *path) {
    // 先删除目录内容
    if (remove_directory_contents(path) == -1) {
        return -1;
    }
    // 删除空目录
    if (rmdir(path) == -1) {
        perror("rmdir");
        return -1;
    }
    return 0;
}

#endif

namespace aria2 {

File::File(const std::string& name) : name_(name) {}

File::File(const File& c) = default;

File::~File() = default;

File& File::operator=(const File& c)
{
  if (this != &c) {
    name_ = c.name_;
  }
  return *this;
}

int File::fillStat(a2_struct_stat& fstat)
{
  return a2stat(utf8ToWChar(name_).c_str(), &fstat);
}

bool File::exists()
{
  a2_struct_stat fstat;
  return fillStat(fstat) == 0;
}

bool File::exists(std::string& err)
{
  a2_struct_stat fstat;
  if (fillStat(fstat) != 0) {
    err = fmt("Could not get file status: %s", strerror(errno));
    return false;
  }
  return true;
}

bool File::isFile()
{
  a2_struct_stat fstat;
  if (fillStat(fstat) < 0) {
    return false;
  }
  return S_ISREG(fstat.st_mode) == 1;
}

bool File::isDir()
{
  a2_struct_stat fstat;
  if (fillStat(fstat) < 0) {
    return false;
  }
  return S_ISDIR(fstat.st_mode) == 1;
}

bool File::remove()
{
  if (isFile()) {
    return a2unlink(utf8ToWChar(name_).c_str()) == 0;
  }
  else if (isDir()) {
    return a2rmdir(utf8ToWChar(name_).c_str()) == 0;
  }
  else {
    return false;
  }
}

bool File::erase()
{
  int ret = 1;
  if (isDir() || isFile()) {
#ifndef _WIN32
    if (isFile()) {
      ret = File::remove() ? 0 : 1;
    }
    else {
      ret = remove_directory(utf8ToWChar(name_).c_str());
    }
  }
#else
    WCHAR *pszFrom = NULL;
    std::wstring cc = utf8ToWChar(name_);
    size_t pos = 0;
    while ((pos = cc.find(L"/", pos)) != std::wstring::npos) {
      cc.replace(pos, 1, L"\\");
      pos += 1;
    }
    const WCHAR *lpszDir = cc.c_str();
    SHFileOperationWPtr fnSHFileOperationW = NULL;
    HMODULE shell32 = GetModuleHandleW(L"shell32.dll");
    if (!shell32 || !lpszDir) {
      return false;
    }
    do {
      size_t len = wcslen(lpszDir);
      fnSHFileOperationW = (SHFileOperationWPtr) GetProcAddress(shell32, "SHFileOperationW");
      if (fnSHFileOperationW == NULL) {
        break;
      }
      if ((pszFrom = (WCHAR *) calloc(len + 4, sizeof(WCHAR))) == NULL) {
        break;
      }
      wcsncpy(pszFrom, lpszDir, len);
      pszFrom[len] = 0;
      pszFrom[len + 1] = 0;
    
      SHFILEOPSTRUCTW fileop;
      fileop.hwnd = NULL;                              // no status display
      fileop.wFunc = FO_DELETE;                        // delete operation
      fileop.pFrom = pszFrom;                          // source file name as double null terminated string
      fileop.pTo = NULL;                               // no destination needed
      fileop.fFlags = FOF_NOCONFIRMATION | FOF_SILENT; // do not prompt the user
      fileop.fFlags |= FOF_NOERRORUI | FOF_ALLOWUNDO;
      fileop.fAnyOperationsAborted = FALSE;
      fileop.lpszProgressTitle = NULL;
      fileop.hNameMappings = NULL;
      // SHFileOperation returns zero if successful; otherwise nonzero
      ret = fnSHFileOperationW(&fileop);
    } while (0);
    if (pszFrom)
    {
        free(pszFrom);
    }
    A2_LOG_INFO(fmt("SHFileOperationW ret = %d", ret));
  }
#endif
  return (0 == ret);
}

#ifdef _WIN32
namespace {
HANDLE openFile(const std::string& filename, bool readOnly = true, DWORD creationDisp = OPEN_EXISTING)
{
  DWORD desiredAccess = GENERIC_READ | (readOnly ? 0 : GENERIC_WRITE);
  DWORD sharedMode = FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE;
  return CreateFileW(utf8ToWChar(filename).c_str(), desiredAccess, sharedMode,
                     /* lpSecurityAttributes */ nullptr, creationDisp,
                     FILE_ATTRIBUTE_NORMAL, /* hTemplateFile */ nullptr);
}
} // namespace
#endif // _WIN32

int64_t File::size()
{
#ifdef _WIN32
  // _wstat cannot be used for symlink.  It always returns 0.  Quoted
  // from https://msdn.microsoft.com/en-us/library/14h5k7ff.aspx:
  //
  //   _wstat does not work with Windows Vista symbolic links. In
  //   these cases, _wstat will always report a file size of 0. _stat
  //   does work correctly with symbolic links.
  auto hn = openFile(name_);
  if (hn == INVALID_HANDLE_VALUE) {
    return 0;
  }
  LARGE_INTEGER fileSize;
  const auto rv = GetFileSizeEx(hn, &fileSize);
  CloseHandle(hn);
  return rv ? fileSize.QuadPart : 0;
#else  // !_WIN32
  a2_struct_stat fstat;
  if (fillStat(fstat) < 0) {
    return 0;
  }
  return fstat.st_size;
#endif // !_WIN32
  return 0;
}

bool File::mkdirs()
{
  if (isDir()) {
    return false;
  }
#ifdef _WIN32
  std::string path = name_;
  for (std::string::iterator i = path.begin(), eoi = path.end(); i != eoi;
       ++i) {
    if (*i == '\\') {
      *i = '/';
    }
  }
  std::string::iterator dbegin;
  if (util::startsWith(path, "//")) {
    // UNC path
    std::string::size_type hostEnd = path.find('/', 2);
    if (hostEnd == std::string::npos) {
      // UNC path with only hostname considered as an error.
      return false;
    }
    else if (hostEnd == 2) {
      // If path starts with "///", it is not considered as UNC.
      dbegin = path.begin();
    }
    else {
      std::string::iterator i = path.begin() + hostEnd;
      std::string::iterator eoi = path.end();
      // //host/mount/dir/...
      //       |     |
      //       i (at this point)
      //             |
      //             dbegin (will be)
      // Skip to after first directory part. This is because
      // //host/dir appears to be non-directory and mkdir it fails.
      for (; i != eoi && *i == '/'; ++i)
        ;
      for (; i != eoi && *i != '/'; ++i)
        ;
      dbegin = i;
      A2_LOG_DEBUG(
          fmt("UNC Prefix %s", std::string(path.begin(), dbegin).c_str()));
    }
  }
  else {
    dbegin = path.begin();
  }
  std::string::iterator begin = path.begin();
  std::string::iterator end = path.end();
  for (std::string::iterator i = dbegin; i != end;) {
#else  // !_WIN32
  std::string::iterator begin = name_.begin();
  std::string::iterator end = name_.end();
  for (std::string::iterator i = begin; i != end;) {
#endif // !_WIN32
    std::string::iterator j = std::find(i, end, '/');
    if (std::distance(i, j) == 0) {
      ++i;
      continue;
    }
    i = j;
    if (i != end) {
      ++i;
    }
#ifdef _WIN32
    if (*(j - 1) == ':') {
      // This is a drive letter, e.g. C:, so skip it.
      continue;
    }
#endif // _WIN32
    std::string dir(begin, j);
    A2_LOG_DEBUG(fmt("Making directory %s", dir.c_str()));
    if (File(dir).isDir()) {
      A2_LOG_DEBUG(fmt("%s exists and is a directory.", dir.c_str()));
      continue;
    }
    if (a2mkdir(utf8ToWChar(dir).c_str(), DIR_OPEN_MODE) == -1) {
      A2_LOG_DEBUG(fmt("Failed to create %s", dir.c_str()));
      return false;
    }
  }
  return true;
} // namespace aria2

mode_t File::mode()
{
  a2_struct_stat fstat;
  if (fillStat(fstat) < 0) {
    return 0;
  }
  return fstat.st_mode;
}

std::string File::getBasename() const
{
  std::string::size_type lastSlashIndex =
      name_.find_last_of(getPathSeparators());
  if (lastSlashIndex == std::string::npos) {
    return name_;
  }
  else {
    return name_.substr(lastSlashIndex + 1);
  }
}

std::string File::getExtname() const
{
  std::string::size_type lastDotIndex =
      name_.find_last_of(".");
  if (lastDotIndex == std::string::npos) {
    return name_;
  }
  else {
    return name_.substr(lastDotIndex + 1);
  }
}

std::string File::getDirname() const
{
  std::string::size_type lastSlashIndex =
      name_.find_last_of(getPathSeparators());
  if (lastSlashIndex == std::string::npos) {
    if (name_.empty()) {
      return A2STR::NIL;
    }
    else {
      return ".";
    }
  }
  else if (lastSlashIndex == 0) {
    return "/";
  }
  else {
    return name_.substr(0, lastSlashIndex);
  }
}

bool File::isDir(const std::string& filename) { return File(filename).isDir(); }

bool File::renameTo(const std::string& dest)
{
#ifdef _WIN32
  // MinGW's rename() doesn't delete an existing destination.  Better
  // to use MoveFileEx, which usually provides atomic move in aria2
  // usecase.
  if (MoveFileExW(utf8ToWChar(name_).c_str(), utf8ToWChar(dest).c_str(),
                  MOVEFILE_COPY_ALLOWED | MOVEFILE_REPLACE_EXISTING)) {
    name_ = dest;
    return true;
  }

  return false;
#else  // !_WIN32
  if (rename(name_.c_str(), dest.c_str()) == 0) {
    name_ = dest;
    return true;
  }
  else {
    return false;
  }
#endif // !_WIN32
  return false;
}

bool File::utime(const Time& actime, const Time& modtime) const
{
#if defined(HAVE_UTIMES)
  struct timeval times[2] = {{actime.getTimeFromEpoch(), 0},
                             {modtime.getTimeFromEpoch(), 0}};
  return utimes(name_.c_str(), times) == 0;
#elif defined(_WIN32)
  auto hn = openFile(name_, false);
  if (hn == INVALID_HANDLE_VALUE) {
    auto errNum = GetLastError();
    A2_LOG_ERROR(fmt(EX_FILE_OPEN, name_.c_str(),
                     util::formatLastError(errNum).c_str()));
    return false;
  }
  // Use SetFileTime because Windows _wutime takes DST into
  // consideration.
  //
  // std::chrono::time_point::time_since_epoch returns the amount of
  // time between it and epoch Jan 1, 1970.  OTOH, FILETIME structure
  // expects the epoch as Jan 1, 1601.  The resolution is 100
  // nanoseconds.
  constexpr auto offset = 116444736000000000LL;
  uint64_t at = std::chrono::duration_cast<std::chrono::nanoseconds>(
                    actime.getTime().time_since_epoch())
                        .count() /
                    100 +
                offset;
  uint64_t mt = std::chrono::duration_cast<std::chrono::nanoseconds>(
                    modtime.getTime().time_since_epoch())
                        .count() /
                    100 +
                offset;
  FILETIME att{static_cast<DWORD>(at & 0xffffffff),
               static_cast<DWORD>(at >> 32)};
  FILETIME mtt{static_cast<DWORD>(mt & 0xffffffff),
               static_cast<DWORD>(mt >> 32)};
  auto rv = SetFileTime(hn, nullptr, &att, &mtt);
  if (!rv) {
    auto errNum = GetLastError();
    A2_LOG_ERROR(fmt("SetFileTime failed, cause: %s",
                     util::formatLastError(errNum).c_str()));
  }
  CloseHandle(hn);
  return rv;
#else  // !defined(HAVE_UTIMES) && !defined(_WIN32)
  a2utimbuf ub;
  ub.actime = actime.getTimeFromEpoch();
  ub.modtime = modtime.getTimeFromEpoch();
  return a2utime(utf8ToWChar(name_).c_str(), &ub) == 0;
#endif // !defined(HAVE_UTIMES) && !defined(_WIN32)
  return false;
}

Time File::getModifiedTime()
{
  a2_struct_stat fstat;
  if (fillStat(fstat) < 0) {
    return 0;
  }
  return Time(fstat.st_mtime);
}

std::string File::getCurrentDir()
{
  const size_t buflen = 2048;
#ifdef _WIN32
  wchar_t buf[buflen];
  if (_wgetcwd(buf, buflen)) {
    return wCharToUtf8(buf);
  }
  else {
    return ".";
  }
#else  // !_WIN32
  char buf[buflen];
  if (getcwd(buf, buflen)) {
    return std::string(buf);
  }
  else {
    return ".";
  }
#endif // !_WIN32
  return ".";
}

bool File::relativePath() 
{
  if (name_.empty())
    return true;
#ifdef _WIN32
  if (name_.size() > 1 && name_[1] == ':' && ((name_[0] >= 'A' && name_[0] <= 'Z') || (name_[0] >= 'a' && name_[0] <= 'z'))) {
    return false;
  }
#else
  if (name_[0] == '/') {
    return false;
  }
#endif
  return true;
}

void File::touch()
{ // 建立一个新的空白文件
#ifdef _WIN32
  auto hn = openFile(name_, false, CREATE_NEW);
  if (hn != INVALID_HANDLE_VALUE) {
    CloseHandle(hn);
  }
#else
  FILE *fp = fopen(name_.c_str(),  "w+");
  if (fp) {
    fclose(fp);
  }
#endif
}

std::string File::getProcessDir()
{
  const size_t buflen = 2048;
#ifdef _WIN32
  wchar_t buf[buflen];
  if (GetModuleFileNameW(NULL, buf, buflen) > 0) {
    wchar_t *p = wcsrchr(buf, L'\\');
    if (p) {
      *p = 0;
    }
    return wCharToUtf8(buf);
  }
  else {
    return ".";
  }
#else  // !_WIN32
  char buf[buflen];
  int n = readlink("/proc/self/exe", buf, buflen);
  if (n > 0 && n < buflen)
  {
    buf[n] = '\0';
    if (strrchr(buf, '/')) {
      strrchr(buf, '/')[0] =  '\0';
    }
    return std::string(buf);
  }
  else {
    return ".";
  }
#endif // !_WIN32
}

const char* File::getPathSeparators()
{
#ifdef _WIN32
  return "/\\";
#else  // !_WIN32
  return "/";
#endif // !_WIN32
}

} // namespace aria2
