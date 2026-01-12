#include <stdio.h>
#include <SDL2/SDL.h>

#define WIDTH 900
#define HEIGHT 600


int main() 
{
  SDL_Init(SDL_Init_VIDEO);
  SDL_Window window* = CreateWindow("Raytacing", SDL_WINDOWPOS_CENTERED, SDL_WINDOWSPOS_CENTERED, WIFTH, HEIGHT);
}