include ../Makefile.depend

CC=g++
DEPEND_FLAGS=-I $(DEPENDENCIES_DIR)/
CFLAGS=-O2 -std=gnu++11 -c -Wall $(DEPEND_FLAGS)

all: kNNClassifier.o

kNNClassifier.o: kNNClassifier.h kNNClassifier.cpp
	$(CC) $(CFLAGS) kNNClassifier.cpp

clean:
	rm -f *.o
