CC = gcc
TARGET = password_generator
SRC = password_generator.c

# -std=c99      : forza lo standard C99 (necessario per uint8_t e scanf %hhu)
CFLAGS = -Wall -Wextra -std=c99 -O2

all:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(OBJS) $(TARGET)