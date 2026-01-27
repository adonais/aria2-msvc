# The toplevel directory of the source tree.
#
MY_TARGET = libwslay

ROOT = ..\..\..
!include "$(ROOT)\system.mak"

TOP = .

CSOURCES = wslay_event.c    \
           wslay_frame.c    \
           wslay_net.c      \
           wslay_queue.c
          
HHEADERS = config.h    \
           wslay.h     \
           wslayver.h  \

OBJECTS =  \
           $(OBJD)\wslay_event.obj \
           $(OBJD)\wslay_frame.obj     \
           $(OBJD)\wslay_net.obj \
           $(OBJD)\wslay_queue.obj

CFLAGS=$(CFLAGS) -W3 -Gy -GR- -Oy- -wd4244 -wd4267 -wd4018 \
       -D _WINDOWS -D _LIB -D _CRT_SECURE_NO_WARNINGS -D HAVE_CONFIG_H -I.

{$(TOP)}.c{$(OBJD)}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\ $<
	
all: dirs $(STATICLIB)

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)
    @if not exist "$(INCD)\wslay" mkdir "$(INCD)\wslay" && echo.   Created $(INCD)\wslay
    @copy wslay.h $(INCD)\wslay\wslay.h /y 2>nul
    @copy wslayver.h $(INCD)\wslay\wslayver.h /y 2>nul
    
$(STATICLIB): $(OBJECTS) $(HHEADERS)
	$(AR) $(ARFLAGS) -out:$@ $(OBJECTS)

# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(BIND)\libwslay.pdb 2>nul
	-del /q $(OBJECTS) 2>nul
	-del /q $(INCD)\wslay\wslay.h 2>nul
	-del /q $(INCD)\wslay\wslayver.h 2>nul