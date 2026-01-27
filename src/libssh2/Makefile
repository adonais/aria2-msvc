# Makefile for libssh2 using Microsoft (Visual) C
# libssh2 is copyright (C) 1995-2017 Jean-loup Gailly and Mark Adler
#
# The toplevel directory of the source tree.
#
ROOT = ..\..
!include "$(ROOT)\system.mak"

TOP = .\src

# variables
STATICLIB = $(BIND)\libssh2.lib

CFLAGS  = $(CFLAGS) -W3 -Oy- -Iinclude -I$(TOP) -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE \
          -DHAVE_CONFIG_H -DLIBSSH2_HAVE_ZLIB

!IF "x$(OPENSSL_ROOT)" == "x"
CFLAGS  = $(CFLAGS) -DLIBSSH2_WINCNG
!ELSE
CFLAGS  = $(CFLAGS) -DLIBSSH2_OPENSSL -I"$(OPENSSL_ROOT)/include"
!ENDIF

OBJS = \
    $(OBJD)\libssh2\agent.obj               \
    $(OBJD)\libssh2\bcrypt_pbkdf.obj        \
    $(OBJD)\libssh2\channel.obj             \
    $(OBJD)\libssh2\comp.obj                \
    $(OBJD)\libssh2\chacha.obj              \
    $(OBJD)\libssh2\cipher-chachapoly.obj   \
    $(OBJD)\libssh2\crypt.obj               \
    $(OBJD)\libssh2\crypto.obj              \
    $(OBJD)\libssh2\global.obj              \
    $(OBJD)\libssh2\hostkey.obj             \
    $(OBJD)\libssh2\keepalive.obj           \
    $(OBJD)\libssh2\kex.obj                 \
    $(OBJD)\libssh2\knownhost.obj           \
    $(OBJD)\libssh2\mac.obj                 \
    $(OBJD)\libssh2\misc.obj                \
    $(OBJD)\libssh2\packet.obj              \
    $(OBJD)\libssh2\pem.obj                 \
    $(OBJD)\libssh2\poly1305.obj            \
    $(OBJD)\libssh2\publickey.obj           \
    $(OBJD)\libssh2\scp.obj                 \
    $(OBJD)\libssh2\session.obj             \
    $(OBJD)\libssh2\sftp.obj                \
    $(OBJD)\libssh2\transport.obj           \
    $(OBJD)\libssh2\userauth.obj            \
    $(OBJD)\libssh2\userauth_kbd_packet.obj \
    $(OBJD)\libssh2\version.obj             \

# targets
all: dirs $(STATICLIB)                      \
     $(INCD)\libssh2.h                      \
     $(INCD)\libssh2_publickey.h            \
     $(INCD)\libssh2_sftp.h                 \

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(OBJD)\libssh2" mkdir "$(OBJD)\libssh2" && echo.   Created "$(OBJD)\libssh2"
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)

$(STATICLIB): $(OBJS)
	$(AR) $(ARFLAGS) -out:$@ $(OBJS)

{$(TOP)}.c{$(OBJD)\libssh2}.obj:
	$(CC) -c $(CFLAGS) -Fo$(OBJD)\libssh2\ $<

$(INCD)\libssh2.h           : include\libssh2.h
    @copy include\libssh2.h $@ /y

$(INCD)\libssh2_publickey.h : include\libssh2_publickey.h
    @copy include\libssh2_publickey.h $@ /y

$(INCD)\libssh2_sftp.h      : include\libssh2_sftp.h
    @copy include\libssh2_sftp.h $@ /y

# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(OBJS) 2>nul
	-del /q $(INCD)\libssh2.h 2>nul
	-del /q $(INCD)\libssh2_publickey.h 2>nul
	-del /q $(INCD)\libssh2_sftp.h 2>nul
	-rd  /s /q "$(OBJD)\libssh2" 2>nul
