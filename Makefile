TARGETS = lesson1
CC = gcc
CFLAGS =-L /usr/local/opt/glew/ -L /usr/local/opt/glew/lib -L /usr/local/opt/sdl2/lib -lSDLmain -lSDL2 -lGLEW -framework Cocoa -framework OpenGL -framework GLUT

all: $(TARGETS)

lesson1:
	$(CC) $(CFLAGS) lesson1.c

lesson2:
	$(CC) $(CFLAGS) lesson2.c

clean:
	rm -f *.out
