CC = gcc
CFLAGS = -Wall
SRCDIR = ..
OUT = ../main_static
SRC = $(SRCDIR)/main.c
STATIC_LIB = $(SRCDIR)/lib.a
INCLUDES = -I$(SRCDIR)

all: $(OUT)

$(OUT): $(SRC) $(STATIC_LIB)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^

clean:
	rm -f $(OUT)
