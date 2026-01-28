##############################################################################
MY_TARGET = aria2c

ROOT=..
!include $(ROOT)\system.mak

CFLAGS = $(CFLAGS) -W3 -Gy -GR- -Oy- -wd4244 -wd4267                         \
       -wd4996 -EHsc -D _WINDOWS -D _CRT_SECURE_NO_WARNINGS -D HAVE_CONFIG_H \
       -D _WIN32 -D CARES_STATICLIB -D XML_STATIC -Ilibaria2\src

!IF "x$(OPENSSL_ROOT)" == "x"
CFLAGS  = $(CFLAGS) -DHAVE_LIBGMP -DHAVE_WINTLS
DEPS = $(DEPS) libgmp.lib
!ELSE
CFLAGS  = $(CFLAGS) -DHAVE_OPENSSL -I"$(OPENSSL_ROOT)/include"
LIBS    = $(LIBS) "$(OPENSSL_ROOT)/lib/libssl.lib" "$(OPENSSL_ROOT)/lib/libcrypto.lib"
!ENDIF

DEPS = libaria2.lib libwslay.lib libexpat.lib libsqlite3.lib                 \
       libcares.lib libssh2.lib microhttpd.lib zlib.lib

LIBS = $(LIBS)                                                               \
       $(DEPS)                                                               \
       user32.lib wsock32.lib ws2_32.lib gdi32.lib winmm.lib iphlpapi.lib    \
       psapi.lib crypt32.lib secur32.lib advapi32.lib shell32.lib

LDFLAGS = $(LDFLAGS) -OPT:REF,ICF -LIBPATH:$(BIND)

all: dirs \
    $(BIND)\aria2c.exe

##############################################################################

clean:
    -del /q  $(OBJD)\main.obj 2>nul
    -del /q  $(BIND)\aria2c.exe 2>nul

##############################################################################

dirs:
    @if not exist $(BIND) mkdir $(BIND) && echo.   Created $(BIND)
    @if not exist $(OBJD) mkdir $(OBJD) && echo.   Created $(OBJD)

$(OBJD)\main.obj : main.cc
	$(CC) $(CFLAGS) /Fo$(OBJD)\ /c main.cc

$(OBJD)\resource.res : resource.rc
	$(RC) /nologo /D "_UNICODE" /D "UNICODE" /fo$@ %s
	
$(BIND)\aria2c.exe : $(OBJD)\main.obj $(OBJD)\resource.res $(DEPS)
    $(LD) /OUT:$@ $(OBJD)\main.obj $(OBJD)\resource.res $(LDFLAGS) $(LIBS) -subsystem:console

zlib.lib       : zlib\src\*.c zlib\src\*.h
libcares.lib   : libcares\src\*.c libcares\src\*.h
libssh2.lib    : libssh2\src\*.c libssh2\src\*.h
microhttpd.lib : libmicrohttpd\src\*.c libmicrohttpd\src\*.h
libaria2.lib   : libaria2\src\*.cc libaria2\src\*.h
libwslay.lib   : libwslay\src\*.c libwslay\src\*.h
libexpat.lib   : libexpat\src\*.c libexpat\src\*.h
#ifdef HAVE_LIBGMP
libgmp.lib     : libgmp\src\*.c libgmp\src\*.h
#endif
libsqlite3.lib : libsqlite3\src\*.c libsqlite3\src\*.h

################################################################# End of File.
