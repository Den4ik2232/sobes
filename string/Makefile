C=gcc
CFLAGS=-Wall -Wextra
OBJ=stroki.o main.o

all: program

program: $(OBJ)
	$(CC) -o program $(OBJ)

stroki.o: stroki.c stroki.h
	$(CC) $(CFLAGS) -c stroki.c

main.o: main.c stroki.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o program
