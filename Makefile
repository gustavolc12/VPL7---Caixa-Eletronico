CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -Wall -O3 -std=c++11 -I include/

all: main
	intruso: 
	$(CC) $(CFLAGS) -c src/intruso.cpp -o build/intruso.o	
    g++ *.cpp -o main.out
    
clean:
    rm main.out