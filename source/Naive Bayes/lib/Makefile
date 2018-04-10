include ../Makefile.depend

CC=g++
DEPEND_FLAGS=-I $(DEPENDENCIES_DIR)/
CFLAGS=-O2 -std=gnu++11 -c -Wall $(DEPEND_FLAGS)

all: NaiveBayesClassifier.o

NaiveBayesClassifier.o: NaiveBayesClassifier.h NaiveBayesClassifier.cpp
	$(CC) $(CFLAGS) NaiveBayesClassifier.cpp

clean:
	rm -f *.o
