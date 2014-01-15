#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window* window = SDL_CreateWindow(
    "OpenGL", 100, 100, 800, 600, SDL_WINDOW_OPENGL
  );
  SDL_Quit();

  return 0;
}
