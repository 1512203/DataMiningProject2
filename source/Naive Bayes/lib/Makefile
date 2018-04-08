CC=g++
CFLAGS=-O2 -std=gnu++11 -c -Wall

all: CSDL.o SortingSupport.o NaiveBayesClassifier.o


CSDL.o: CSDL.h CSDL.cpp
	$(CC) $(CFLAGS) CSDL.cpp

NaiveBayesClassifier.o: NaiveBayesClassifier.h NaiveBayesClassifier.cpp
	$(CC) $(CFLAGS) NaiveBayesClassifier.cpp

SortingSupport.o: SortingSupport.h SortingSupport.cpp
	$(CC) $(CFLAGS) SortingSupport.cpp

clean:
	rm -f *.o
