#include<SDL.h>
#pragma once
class StartGame{
SDL_Rect srcRect, moverRect;
bool rec_recover=false;

public:
    // add the fly function here as well.
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void animate();
    
    StartGame(); // may add other overloaded constructors here... 

};
