#include<iostream>
#include <SDL2/SDL.h>
using namespace std;

int main(){
    
    int x;
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if ((x = SDL_Init(SDL_INIT_VIDEO)< 0))
    {
        cout << "SDL init failed.." << endl;
        return x;
    }

    SDL_Window *window = SDL_CreateWindow("Particle exp", 
           SDL_WINDOWPOS_UNDEFINED,
           SDL_WINDOWPOS_UNDEFINED, 
           SCREEN_WIDTH, SCREEN_HEIGHT,
           0);

    if (window == NULL){
        cout << "window did not get created " << endl;
        SDL_Quit();
        return 2;
    }
    SDL_Event event;
    bool quit = false;

    while (!quit)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            quit = true;
        }

    }
    SDL_DestroyWindow(window);
    cout << "SDL init suceeded " << endl;
    SDL_Quit();
    return 0;
}
