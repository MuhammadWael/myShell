# Makefile for matrix multiplication program

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Source files
SRC = main.c myshell.c

# Header files
HDR = myshell.h

# Target executable
TARGET = myShell

# Build target
$(TARGET): $(SRC) $(HDR)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean target
clean:
	rm -f $(TARGET)
