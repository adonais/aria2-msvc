# Makefile for zlib using Microsoft (Visual) C
# zlib is copyright (C) 1995-2017 Jean-loup Gailly and Mark Adler
#
# The toplevel directory of the source tree.
#
ROOT = ..\..
!include "$(ROOT)\system.mak"

TOP = .\src

# variables
STATICLIB = $(BIND)\microhttpd.lib

CFLAGS  = $(CFLAGS) -W3 -Oy- -Ob2 -Oi -Ot -Gd -wd4746 -wd4996 -wd4820 -wd4127 -wd5045 -wd4711 -wd4710 \
          -Isrc -D_LIB -DMHD_W32LIB -DBUILDING_MHD_LIB -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE

OBJS = \
    $(OBJD)\microhttpd\basicauth.obj       \
    $(OBJD)\microhttpd\connection.obj      \
    $(OBJD)\microhttpd\daemon.obj          \
    $(OBJD)\microhttpd\digestauth.obj      \
    $(OBJD)\microhttpd\gen_auth.obj        \
    $(OBJD)\microhttpd\internal.obj        \
    $(OBJD)\microhttpd\md5.obj             \
    $(OBJD)\microhttpd\memorypool.obj      \
    $(OBJD)\microhttpd\mhd_mono_clock.obj  \
    $(OBJD)\microhttpd\mhd_panic.obj       \
    $(OBJD)\microhttpd\mhd_send.obj        \
    $(OBJD)\microhttpd\mhd_sockets.obj     \
    $(OBJD)\microhttpd\mhd_str.obj         \
    $(OBJD)\microhttpd\mhd_threads.obj     \
    $(OBJD)\microhttpd\postprocessor.obj   \
    $(OBJD)\microhttpd\reason_phrase.obj   \
    $(OBJD)\microhttpd\response.obj        \
    $(OBJD)\microhttpd\sha256.obj          \
    $(OBJD)\microhttpd\sha512_256.obj      \
    $(OBJD)\microhttpd\sysfdsetsize.obj    \
    $(OBJD)\microhttpd\tsearch.obj         \

# targets
all: dirs $(STATICLIB)     \
     $(INCD)\microhttpd.h  \

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(OBJD)\microhttpd" mkdir "$(OBJD)\microhttpd" && echo.   Created "$(OBJD)\microhttpd"
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)

$(INCD)\microhttpd.h : src\microhttpd.h
    @copy src\microhttpd.h $@ /y

$(STATICLIB): $(OBJS)
	$(AR) $(ARFLAGS) -out:$@ $(OBJS)

{$(TOP)}.c{$(OBJD)\microhttpd}.obj:
	$(CC) -c $(CFLAGS) -Fo$(OBJD)\microhttpd\ $<

# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(OBJS) 2>nul
	-del /q $(INCD)\microhttpd.h 2>nul
	-rd  /s /q "$(OBJD)\microhttpd" 2>nul
