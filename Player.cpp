#include "Player.hpp"
#include "game.hpp"
#include <iostream>

Player::Player()
{
    srcRect = {110,24,56,98};
    moverRect = {0,0,60,60};
} 

void Player:: Animation()
{   std::cout<<"hello/n";
    switch (srcRect.y) //since y coordinates are different for each srcRect tuple, using the y coordinates to differentiate between different postions of the player
        {

            //cases--> given the current coordinate of the player, code should update the exisitng coordinate to change the posititon of the player
            
            case 19: 
                srcRect={110,24,56,98};
                break;
            
            case 24: 
                srcRect={191,21,38,101};
                break;

            case 21:
                srcRect ={254,17,45,104};

            case 17:
                srcRect={18,139,73,96};

            case 139:
                srcRect={109,144,58,98};

            case 144:
                srcRect={191,140,38,103};

            case 140:
                srcRect={254,139,45,103};

            default:  //resets the position again
                srcRect={18,19,73,96};
                break;
        }
}

/*Player positions (x,y,w,h) 
pos1: (18,19,73,96)
pos2: (110,24,56,98)
pos3: (191,21,38,101)
pos4: (254,17,45,104)
pos5: (18,139,73,96)
pos6: (109,144,58,98)
pos7: (191,140,38,103)
pos8: (254,139,45,103)


*/
