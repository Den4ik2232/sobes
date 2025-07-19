CC = gcc
AR = ar
CFLAGS = -Wall -fPIC
SRCDIR = ..
SRC = $(SRCDIR)/lib.c
OBJ = lib.o
STATIC_LIB = $(SRCDIR)/lib.a
SHARED_LIB = $(SRCDIR)/lib.so

all: $(STATIC_LIB) $(SHARED_LIB)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(STATIC_LIB): $(OBJ)
	$(AR) cr $@ $^

$(SHARED_LIB): $(OBJ)
	$(CC) -shared -o $@ $^

clean:
	rm -f $(OBJ) $(STATIC_LIB) $(SHARED_LIB)
