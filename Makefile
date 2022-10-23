CC := g++
FLAGS := -I includes/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main 
intruso: 
    $(CC) $(CFLAGS) -c $(SRC)intruso.cpp -o $(BUILD)intruso.o

main: intruso
    $(CC) $(CFLAGS) $(BUILD)intruso.o $(SRC)main.cpp -o $(TARGET)
clean: 
    $(RM) -r $(BUILD)* $(TARGET)
	