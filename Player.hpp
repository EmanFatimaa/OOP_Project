#pragma once
#include<SDL.h>
// #include "Unit.hpp"
#include "Character.hpp"
#include <iostream>

class Player : public Character {
    public:
        Player();
        void Animation();
};