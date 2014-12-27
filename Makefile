CC=gcc

all: ruin

clean:
	rm -f ruin

ruin: ruin.c
	$(CC) -W -Wall -o $@ $^

.PHONY: all clean
