#include <iostream>
#include "MyshaOdyssey.hpp"
#include "Player.hpp"
#include <cstring>
#include <typeinfo>
#include<SDL_ttf.h>

using namespace std;

MyshaOdyssey::MyshaOdyssey()
{

}

void MyshaOdyssey::drawCharacter()
{
    player->draw();
}

void MyshaOdyssey::move(const Uint8* keystates)
{
     // Movement keys for character 1
    if (keystates[SDL_SCANCODE_UP])
    {
        player->moverRect.y -= jump;
    }
    else if (keystates[SDL_SCANCODE_DOWN])
    {
        player->moverRect.y += jump;
    }
    else if (keystates[SDL_SCANCODE_LEFT])
    {
        player->moverRect.x -= jump;
    }
    else if (keystates[SDL_SCANCODE_RIGHT])
    {        
        player->moverRect.x += jump;
    }
}

void MyshaOdyssey::PlayerAnimation()
{
    player->Animation();
}


void MyshaOdyssey::EM(){
    //SDL_Init();
    TTF_Init(); //Initializes SDL_TTF for displaying text in 
    TTF_Font* font = TTF_OpenFont("arial.ttf", 24); //Opens a font style that can be downloaded as a .ttf file and sets a font size
    SDL_Color color = {0, 0, 0}; //This is the texts color that can be changed using RGB values from 0 to 255.
    string tmp = "EM"; //converts score to string that can later be displayed using the font file - hence why we needed font.
    SDL_Surface *surfacemessage = TTF_RenderText_Solid(font, tmp.c_str(), color); //A surface is created using functions from SDL library that displays the score on the screen.
    SDL_Texture *Message = SDL_CreateTextureFromSurface(Drawing::gRenderer, surfacemessage); //Converts into texture that can be displayed
    SDL_Rect Message_rect = {175, 160, 50, 30}; //create a rect for it 
    SDL_RenderCopy(Drawing::gRenderer, Message, NULL, &Message_rect);
    SDL_FreeSurface(surfacemessage);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(font);
    TTF_Quit();
}

void MyshaOdyssey::DB(){
    //SDL_Init();
    TTF_Init(); //Initializes SDL_TTF for displaying text in 
    TTF_Font* font = TTF_OpenFont("arial.ttf", 24); //Opens a font style that can be downloaded as a .ttf file and sets a font size
    SDL_Color color = {0, 0, 0}; //This is the texts color that can be changed using RGB values from 0 to 255.
    string tmp = "DB"; //converts score to string that can later be displayed using the font file - hence why we needed font.
    SDL_Surface *surfacemessage = TTF_RenderText_Solid(font, tmp.c_str(), color); //A surface is created using functions from SDL library that displays the score on the screen.
    SDL_Texture *Message = SDL_CreateTextureFromSurface(Drawing::gRenderer, surfacemessage); //Converts into texture that can be displayed
    SDL_Rect Message_rect = {762, 166, 50, 30}; //create a rect for it 
    SDL_RenderCopy(Drawing::gRenderer, Message, NULL, &Message_rect);
    SDL_FreeSurface(surfacemessage);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(font);
    TTF_Quit();
}

void MyshaOdyssey::DLD(){
    //SDL_Init();
    TTF_Init(); //Initializes SDL_TTF for displaying text in 
    TTF_Font* font = TTF_OpenFont("arial.ttf", 24); //Opens a font style that can be downloaded as a .ttf file and sets a font size
    SDL_Color color = {0, 0, 0}; //This is the texts color that can be changed using RGB values from 0 to 255.
    string tmp = "DLD"; //converts score to string that can later be displayed using the font file - hence why we needed font.
    SDL_Surface *surfacemessage = TTF_RenderText_Solid(font, tmp.c_str(), color); //A surface is created using functions from SDL library that displays the score on the screen.
    SDL_Texture *Message = SDL_CreateTextureFromSurface(Drawing::gRenderer, surfacemessage); //Converts into texture that can be displayed
    SDL_Rect Message_rect = {181, 461, 50, 30}; //create a rect for it 
    SDL_RenderCopy(Drawing::gRenderer, Message, NULL, &Message_rect);
    SDL_FreeSurface(surfacemessage);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(font);
    TTF_Quit();
}

void MyshaOdyssey::OOP(){
    //SDL_Init();
    TTF_Init(); //Initializes SDL_TTF for displaying text in 
    TTF_Font* font = TTF_OpenFont("arial.ttf", 24); //Opens a font style that can be downloaded as a .ttf file and sets a font size
    SDL_Color color = {0, 0, 0}; //This is the texts color that can be changed using RGB values from 0 to 255.
    string tmp = "OOP"; //converts score to string that can later be displayed using the font file - hence why we needed font.
    SDL_Surface *surfacemessage = TTF_RenderText_Solid(font, tmp.c_str(), color); //A surface is created using functions from SDL library that displays the score on the screen.
    SDL_Texture *Message = SDL_CreateTextureFromSurface(Drawing::gRenderer, surfacemessage); //Converts into texture that can be displayed
    SDL_Rect Message_rect = {497, 337, 50, 30}; //create a rect for it 
    SDL_RenderCopy(Drawing::gRenderer, Message, NULL, &Message_rect);
    SDL_FreeSurface(surfacemessage);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(font);
    TTF_Quit();
}

void MyshaOdyssey::probStats(){
    //SDL_Init();
    TTF_Init(); //Initializes SDL_TTF for displaying text in 
    TTF_Font* font = TTF_OpenFont("arial.ttf", 24); //Opens a font style that can be downloaded as a .ttf file and sets a font size
    SDL_Color color = {0, 0, 0}; //This is the texts color that can be changed using RGB values from 0 to 255.
    string tmp = "Prob&Stats"; //converts score to string that can later be displayed using the font file - hence why we needed font.
    SDL_Surface *surfacemessage = TTF_RenderText_Solid(font, tmp.c_str(), color); //A surface is created using functions from SDL library that displays the score on the screen.
    SDL_Texture *Message = SDL_CreateTextureFromSurface(Drawing::gRenderer, surfacemessage); //Converts into texture that can be displayed
    SDL_Rect Message_rect = {767, 448, 70, 50}; //create a rect for it 
    SDL_RenderCopy(Drawing::gRenderer, Message, NULL, &Message_rect);
    SDL_FreeSurface(surfacemessage);
    SDL_DestroyTexture(Message);
    TTF_CloseFont(font);
    TTF_Quit();
}

MyshaOdyssey::~MyshaOdyssey()
{

}

