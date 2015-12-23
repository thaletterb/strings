# Makefile tutorial:
# http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib

LIBS=

_DEPS = strings_as_arrays.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = strings_as_arrays.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

strings_as_arrays: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f strings_as_arrays $(ODIR)/*.o *~ core $(INCDIR)/*~ 
