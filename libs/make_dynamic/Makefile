CC = gcc
CFLAGS = -Wall
SRCDIR = ..
OUT = ../main_dynamic
SRC = $(SRCDIR)/main.c
INCLUDES = -I$(SRCDIR)
LDFLAGS = -L$(SRCDIR)  -l:lib.so

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OUT)
