# The toplevel directory of the source tree.
#
# MY_NO_UNICODE = 1
MY_TARGET = libsqlite3

ROOT = ..\..\..
!include "$(ROOT)\system.mak"

TOP = .

CSOURCES = sqlite3.c
          
HHEADERS = sqlite3.h

OBJECTS =  $(OBJD)\sqlite3.obj


SQL_FLAGS=-D SQLITE_SECURE_DELETE -D SQLITE_CORE -D SQLITE_ENABLE_FTS3 -D SQLITE_ENABLE_UNLOCK_NOTIFY -DSQLITE_THREADSAFE=1\
          -D SQLITE_ENABLE_DBSTAT_VTAB -D SQLITE_DEFAULT_PAGE_SIZE=32768 -D SQLITE_MAX_DEFAULT_PAGE_SIZE=32768 \
          -D SQLITE_WIN32_GETVERSIONEX=0 -D SQLITE_ALLOW_URI_AUTHORITY=1 -D SQLITE_OMIT_DEPRECATED=1 \
          -D SQLITE_OMIT_DECLTYPE=1 -D SQLITE_OMIT_BUILTIN_TEST=1 -DSQLITE_OMIT_JSON -DSQLITE_OMIT_UTF16
          
!if "$(BITS)"=="64"
SQL_FLAGS = $(SQL_FLAGS) -D SQLITE_TEMP_STORE=2
!endif
          
CFLAGS=$(CFLAGS) -W3 -GF -Gy -GR- -Oy- -wd4244 -wd4267 -wd4996 \
       -D _WINDOWS -D _LIB -D _CRT_SECURE_NO_WARNINGS -I.

{$(TOP)}.c{$(OBJD)}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\ $<

all: dirs $(STATICLIB)             \
     $(INCD)\sqlite3.h             \

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)
    
$(INCD)\sqlite3.h : sqlite3.h
    @copy sqlite3.h $@ /y

$(STATICLIB): $(OBJECTS)
	$(AR) $(ARFLAGS) -out:$@ $(OBJECTS)

# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(BIND)\libsqlite3.pdb 2>nul
	-del /q $(OBJECTS) 2>nul
	-del /q $(INCD)\sqlite3.h 2>nul