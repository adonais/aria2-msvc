# -----------------------------------------------
# Detect NMAKE version deducing old MSVC versions
# -----------------------------------------------
#MY_DEBUG = 1

!IFNDEF _NMAKE_VER
!  MESSAGE Macro _NMAKE_VER not defined.
!  MESSAGE Use MSVC's NMAKE to process this makefile.
!  ERROR   See previous message.
!ENDIF

!IF     "$(_NMAKE_VER)" == "6.00.8168.0"
CC_VERS_NUM = 60
!ELSEIF "$(_NMAKE_VER)" == "6.00.9782.0"
CC_VERS_NUM = 60
!ELSEIF "$(_NMAKE_VER)" == "7.00.8882"
CC_VERS_NUM = 70
!ELSEIF "$(_NMAKE_VER)" == "7.00.9466"
CC_VERS_NUM = 70
!ELSEIF "$(_NMAKE_VER)" == "7.00.9955"
CC_VERS_NUM = 70
!ELSEIF "$(_NMAKE_VER)" == "14.13.26132.0"
CC_VERS_NUM = 140
!ELSE
# Pick an arbitrary bigger number for all later versions
CC_VERS_NUM = 199
!ENDIF

!IF "$(Platform)"=="x64" || "$(TARGET_CPU)"=="x64" || ("$(VSCMD_ARG_HOST_ARCH)"=="x64" && "$(VSCMD_ARG_TGT_ARCH)"=="x64")
PLATFORM = X64
BITS	 = 64
!ELSEIF "$(Platform)"=="x86" || "$(TARGET_CPU)"=="x86" || "$(VSCMD_ARG_TGT_ARCH)"=="x86"
PLATFORM = X86
BITS	 = 32
!ENDIF

CFLAGS  = -nologo -MD -O2 -utf-8

!IF "$(PLATFORM)" == "X64"
#!MESSAGE Building for 64-bit X64.
!IF "$(CC)" == "cl"
CFLAGS  = $(CFLAGS) -favor:blend -GL -Gm-
!ENDIF
CFLAGS   = $(CFLAGS) -DWIN64 -D_WIN64 -DWIN32_LEAN_AND_MEAN -D _WIN32_WINNT=0x601 -I$(INCD)
!ELSEIF "$(PLATFORM)" == "X86"
#!MESSAGE Building for 32-bit X86.
!IF "$(CC)" == "cl"
CFLAGS  = $(CFLAGS) -GL -Gm-
!ENDIF
CFLAGS   = $(CFLAGS) -DWIN32_LEAN_AND_MEAN -D _WIN32_WINNT=0x601 -I$(INCD)
!ELSE
!ERROR Unknown target processor: $(PLATFORM)
!ENDIF

!IF "$(CC)" == "cl"
AR   = lib -nologo 
LD   = link -nologo
LDFLAGS = $(LDFLAGS) -LTCG
ARFLAGS = -LTCG
RC   = rc
!ELSEIF "$(CC)" == "clang-cl"
AR   = llvm-lib -nologo
LD   = lld-link -nologo
LDFLAGS = $(LDFLAGS) -guard:cf
RC   = llvm-rc
CFLAGS   = -flto=thin -guard:cf $(CFLAGS) -Xclang -Wno-unused-variable -Wno-unused-function \
           -Wno-incompatible-pointer-types -Xclang -Wno-unused-but-set-variable \
           -Wno-deprecated-literal-operator -Xclang -Wno-unused-function
!IF "$(BITS)" == "32"
CFLAGS   = --target=i686-pc-windows-msvc $(CFLAGS) 
!ENDIF
!ELSE
!ERROR Unknown compiler
!ENDIF

!IFNDEF MY_NO_UNICODE
CFLAGS = $(CFLAGS) -D_UNICODE -DUNICODE
!ENDIF 

!IFDEF MY_TARGET
STATICLIB = $(BIND)\$(MY_TARGET).lib
!IF "$(MY_DEBUG)" == "1"
CFLAGS   = $(CFLAGS) -D DEBUG -Zi -Fd"$(BIND)\$(MY_TARGET)"
LDFLAGS  = $(LDFLAGS) -DEBUG
!ELSE
CFLAGS   = $(CFLAGS) -D NDEBUG 
!ENDIF
!ENDIF 

XPCFLAGS = -D "_USING_V110_SDK71_"
XPLFALGS = /subsystem:console,5.01
HIDE     = /subsystem:windows

##############################################################################
##
INCD  = $(ROOT)\include
BIND  = $(ROOT)\Release
OBJD  = $(ROOT)\.dep
