# Makefile tutorial:
# http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=

_DEPS = strings_as_pointers.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = strings_as_pointers.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

strings_as_pointers: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f strings_as_pointers $(ODIR)/*.o *~ core $(INCDIR)/*~ 
