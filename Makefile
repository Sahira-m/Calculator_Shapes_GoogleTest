PROG=program.exe
SOURCES=main.c game.c shapes.c calculator.c
DEPS=game.h shapes.h calculator.h
CC=gcc
CFLAGS=-Wall -Werror
DEBUG?=1
GTESTINCLUDE = gtest
LIBGTEST = C:\msys64\mingw64\lib\libgtest_main.a C:\msys64\mingw64\lib\libgtest.a

ifeq ($(DEBUG), 1)
	CFLAGS += -g
	OUTPUTDIR=bin/debug
	PROG=program-debug.exe
else
	CFLAGS += -g0 -O3
	OUTPUTDIR=bin/release
endif

OBJS =  $(addprefix $(OUTPUTDIR)/,$(SOURCES:.c=.o))

$(PROG): $(OUTPUTDIR) $(OBJS) 
	$(CC) $(CFLAGS) -o $(PROG) $(OBJS)


$(OUTPUTDIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $< 

clean:
	@del /q "$(OUTPUTDIR)" 
	@del /q $(PROG)

$(OUTPUTDIR):
	@mkdir "$(OUTPUTDIR)"

check.exe: gametest.o game.o shapes.o shapes_test.o calculator.o calculatortest.o  
	g++ -o $@ $^ $(CFLAGS) -I $(GTESTINCLUDE)  $(LIBGTEST)

test: check.exe
	./check.exe


.PHONY: clean