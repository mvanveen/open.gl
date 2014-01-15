TARGETS = lesson1
CC = gcc
CFLAGS = -L /usr/local/opt/sdl/lib -lSDLmain -lSDL -framework Cocoa

all: $(TARGETS)

lesson1:
	$(CC) $(CFLAGS) lesson1.c

clean:
	rm -f *.out
