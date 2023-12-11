#include <iostream>
#include "Character.hpp"
#include "drawing.hpp"

void Character::draw()
{
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Character :: Animation() {
    std::cout<<"hello";
}
