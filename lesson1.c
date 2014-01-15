#define GLEW_STATIC
#include <GL/glew.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

// Specify prototype of function
// typedef void (*GENBUFFERS) (GLsizei, GLuint*);
//
//// Load address of function and assign it to a function pointer
//GENBUFFERS glGenBuffers = (GENBUFFERS)wglGetProcAddress("glGenBuffers");
//// or Linux:
//GENBUFFERS glGenBuffers = (GENBUFFERS)glXGetProcAddress("glGenBuffers");
//// or OSX:
//GENBUFFERS glGenBuffers = (GENBUFFERS)NSGLGetProcAddress("glGenBuffers");
//
//// Call function as normal
//int buffer;
//glGenBuffers(1, &buffer);


int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window* window = SDL_CreateWindow(
    "OpenGL", 100, 100, 800, 600, SDL_WINDOW_OPENGL
  );

  SDL_GLContext context = SDL_GL_CreateContext(window);

  glewExperimental = GL_TRUE;
  glewInit();

  GLuint vertexBuffer;
  glGenBuffers(1, &vertexBuffer);
  
  SDL_Event windowEvent;

  while (true) {
    if (SDL_PollEvent(&windowEvent)) {
      if (windowEvent.type == SDL_QUIT) break;
    }
    SDL_GL_SwapWindow(window);
  }

  // delete GL context and quit
  SDL_GL_DeleteContext(context);
  SDL_Quit();

  return 0;
}
