# The toplevel directory of the source tree.
#
MY_NO_UNICODE = 1
MY_TARGET = libexpat

ROOT = ..\..\..
!include "$(ROOT)\system.mak"

TOP = .

OBJECTS =  \
           $(OBJD)\xmlparse.obj \
           $(OBJD)\xmlrole.obj  \
           $(OBJD)\xmltok.obj   \

CFLAGS=$(CFLAGS) -W3 -Gy -GR- -Oy- -wd4244 -wd4267 \
       -D _WINDOWS -D _LIB -D _CRT_SECURE_NO_WARNINGS -I.

{$(TOP)}.c{$(OBJD)}.obj:
	$(CC) -c $(CFLAGS) /Fo$(OBJD)\ $<
	
all: dirs $(STATICLIB)           \
     $(INCD)\expat.h             \
     $(INCD)\expat_config.h      \
     $(INCD)\expat_external.h    \

dirs:
    @if not exist "$(BIND)" mkdir "$(BIND)" && echo.   Created $(BIND)
    @if not exist "$(OBJD)" mkdir "$(OBJD)" && echo.   Created $(OBJD)
    @if not exist "$(INCD)" mkdir "$(INCD)" && echo.   Created $(INCD)
    
$(INCD)\expat.h : expat.h
    @copy expat.h $@ /y

$(INCD)\expat_config.h : expat_config.h
    @copy expat_config.h $@ /y

$(INCD)\expat_external.h : expat_external.h
    @copy expat_external.h $@ /y 
    
$(STATICLIB): $(OBJECTS)
	$(AR) $(ARFLAGS) -out:$@ $(OBJECTS)

# cleanup
clean:
	-del /q $(STATICLIB) 2>nul
	-del /q $(BIND)\libexpat.pdb 2>nul
	-del /q $(OBJECTS) 2>nul
	-del /q $(INCD)\expat.h 2>nul
	-del /q $(INCD)\expat_external.h 2>nul