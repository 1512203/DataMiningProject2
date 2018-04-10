include ../Makefile.depend
DEPEND_FLAGS=-I $(DEPENDENCIES_DIR)
DEPENDENCIES_LIST=$(DEPENDENCIES_DIR)/CSDL.o $(DEPENDENCIES_DIR)/SortingSupport.o

LIB_DIR=../lib
LIB_FLAGS=-I $(LIB_DIR)
LIB_LIST=$(LIB_DIR)/kNNClassifier.o

INCLUDED_LIST=$(LIB_LIST) $(DEPENDENCIES_LIST)

CC=g++
CFLAGS=-O2 -std=gnu++11 -c -Wall $(DEPEND_FLAGS) $(LIB_FLAGS)

all: main

main: main.o $(INCLUDED_LIST)
	$(CC) main.o $(INCLUDED_LIST) -o main

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -f *.o
	rm -f main
