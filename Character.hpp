#pragma once
#include <SDL.h>

class Character 
{
    private:
    public:
        SDL_Rect srcRect, moverRect;
        void draw();
        virtual void Animation();
};