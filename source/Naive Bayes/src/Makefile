CC=g++
CFLAGS=-O2 -std=gnu++11 -c -Wall

all: main

main: main.o ../lib/CSDL.o ../lib/NaiveBayesClassifier.o ../lib/SortingSupport.o
	$(CC) main.o ../lib/CSDL.o ../lib/NaiveBayesClassifier.o ../lib/SortingSupport.o -o main

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o
	rm -rf main
