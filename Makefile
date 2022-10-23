CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I includes/

all: main

intruso: 
	$(CC) $(CFLAGS) -c src/intruso.cpp -o build/intruso.o	
	
main : intruso
	$(CC) $(CFLAGS) build/intruso.o src/main.cpp -o $(TARGET)

	g++ *.cpp -o main.out

clean:
	rm main.out