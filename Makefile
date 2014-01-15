TARGETS = lesson1
CC = gcc
CFLAGS = -L /usr/local/opt/sdl2/lib -lSDLmain -lSDL2 -framework Cocoa -framework OpenGL


all: $(TARGETS)

lesson1:
	$(CC) $(CFLAGS) lesson1.c

clean:
	rm -f *.out
