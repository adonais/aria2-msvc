# --------------------------------------------------------------------------------------
###example: nmake CC=clang-cl OPENSSL_ROOT=d:/works/mozillabuild/mslibs/libopenssl_md####
# --------------------------------------------------------------------------------------

ROOT = .
!include "$(ROOT)\system.mak"

all:
    cd "$(MAKEDIR)"
	@if exist "$(MAKEDIR)\src\zlib\Makefile" cd "$(MAKEDIR)\src\zlib" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
	@if exist "$(MAKEDIR)\src\libmicrohttpd\Makefile" cd "$(MAKEDIR)\src\libmicrohttpd" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
	@if exist "$(MAKEDIR)\src\libexpat\src\Makefile" cd "$(MAKEDIR)\src\libexpat\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
	@if exist "$(MAKEDIR)\src\libcares\Makefile" cd "$(MAKEDIR)\src\libcares" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
	@if exist "$(MAKEDIR)\src\libssh2\Makefile" cd "$(MAKEDIR)\src\libssh2" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
!IF "x$(OPENSSL_ROOT)" == "x"
	@if exist "$(MAKEDIR)\src\libgmp\src\Makefile" cd "$(MAKEDIR)\src\libgmp\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
!ENDIF
	@if exist "$(MAKEDIR)\src\libsqlite3\src\Makefile" cd "$(MAKEDIR)\src\libsqlite3\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
	@if exist "$(MAKEDIR)\src\libwslay\src\Makefile" cd "$(MAKEDIR)\src\libwslay\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
	@if exist "$(MAKEDIR)\src\libaria2\src\Makefile" cd "$(MAKEDIR)\src\libaria2\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS)
    @if exist "$(MAKEDIR)\src\Makefile" cd "$(MAKEDIR)\src" && @$(MAKE) /NOLOGO /$(MAKEFLAGS)
    cd "$(MAKEDIR)"

clean:
    cd "$(MAKEDIR)"
	@if exist "$(MAKEDIR)\src\zlib\Makefile" cd "$(MAKEDIR)\src\zlib" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libmicrohttpd\Makefile" cd "$(MAKEDIR)\src\libmicrohttpd" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libexpat\src\Makefile" cd "$(MAKEDIR)\src\libexpat\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libcares\Makefile" cd "$(MAKEDIR)\src\libcares" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libssh2\Makefile" cd "$(MAKEDIR)\src\libssh2" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libgmp\src\Makefile" cd "$(MAKEDIR)\src\libgmp\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libsqlite3\src\Makefile" cd "$(MAKEDIR)\src\libsqlite3\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libwslay\src\Makefile" cd "$(MAKEDIR)\src\libwslay\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
	@if exist "$(MAKEDIR)\src\libaria2\src\Makefile" cd "$(MAKEDIR)\src\libaria2\src" && $(MAKE) /NOLOGO /$(MAKEFLAGS) clean
    @if exist "$(MAKEDIR)\src\Makefile" cd "$(MAKEDIR)\src" && @$(MAKE) /NOLOGO /$(MAKEFLAGS) clean
    cd "$(MAKEDIR)"
    -del /q /f /s *~ 2>nul
    -rd /s /q $(INCD) 2>nul
    -rd /s /q $(BIND) 2>nul
    -rd /s /q $(OBJD) 2>nul
