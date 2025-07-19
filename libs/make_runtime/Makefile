# Makefile — сборка main с dlopen

CC = gcc
CFLAGS = -Wall
OUT = ../main_runtime
SRC = ./main.c

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ -ldl

clean:
	rm -f $(OUT)
