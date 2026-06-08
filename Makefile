CC=gcc
CFLAGS=-Wall -Iinclude
SRC=$(wildcard src/*.c)
TARGET=i2c_bus_manager
all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
clean:
	rm -f $(TARGET)
