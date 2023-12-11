#include<SDL.h>
#include "Character.hpp"
#include "Player.hpp"
#include<vector>
#include<list>
#include "drawing.hpp"


using namespace std;

class MyshaOdyssey{

    private:
        Character *player = new Player(); 
        int jump = 7; // speed
    public:
        MyshaOdyssey();
        void move(const Uint8* keystates);
        void drawCharacter();
        void PlayerAnimation();
        void EM();
        void DB();
        void DLD();
        void OOP();
        void probStats();
        ~MyshaOdyssey();

};