#include <SDL/SDL.h>

int main() {
    SDL_Surface *screen;
    SDL_Init(SDL_INIT_EVERYTHING);

    screen = SDL_SetVideoMode(800, 600, 32, SDL_SWSURFACE);

    SDL_Quit();
    return 0;
}
