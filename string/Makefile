C=gcc
CFLAGS=-Wall -Wextra -lpthread
OBJ=stroki.o main.o

all: program

program: $(OBJ)
	$(CC) $(CFLAGS) -o program $(OBJ)

stroki.o: stroki.c stroki.h
	$(CC) $(CFLAGS) -c stroki.c

main.o: main.c stroki.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o program
