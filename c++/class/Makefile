CC = g++
CFLAGS = -g -Wall
LDFLAGS =
CFLAGS += -D_CLASS_TEST_

all: test_class test_class1

test_class:
	$(CC) class.cpp $(CFLAGS) -o class

test_class1:
	$(CC) class1.cpp -o class1

clean:
	rm -rf class *.dSYM class1
