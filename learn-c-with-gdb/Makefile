CFLAGS=-Wall -g

CC=gcc

EX3=./ex3.c
GDB_EX = ./gdb_ex.c

all: clean buildEx3 buildGdbEx

buildEx3:
	$(CC) $(CFLAGS) $(EX3) -o ex3

buildGdbEx:
	$(CC) $(CFLAGS) $(GDB_EX) -o gdb_ex

clean:
	rm -f ex3 gdb_ex
