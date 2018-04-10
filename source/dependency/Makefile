CC=g++
CFLAGS=-Wall -O2 -std=gnu++14 -c

all: CSDL.o SortingSupport.o


CSDL.o: CSDL.cpp CSDL.h
	$(CC) $(CFLAGS) CSDL.cpp

SortingSupport.o: SortingSupport.h SortingSupport.cpp
	$(CC) $(CFLAGS) SortingSupport.cpp

clean:
	rm -rf *.o
