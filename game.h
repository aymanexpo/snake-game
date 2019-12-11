//////////////////////////////////////////
//game.h
//////////////////////////////////////////
//définition des fonction de gestion
//de l'écran de jeu
//////////////////////////////////////////
//-----------------------AYMANE TALIBI-----------------------------------
//////////////////////////////////////////
//-----------------------AYMANE TALIBI-----------------------------------
#ifndef __GAME_H__
#define __GAME_H__
//-----------------------AYMANE TALIBI-----------------------------------
#include <sdl/sdl.h>
//-----------------------AYMANE TALIBI-----------------------------------
int Game_Load();
int Game_HandleEvents(SDL_Event * );
void Game_Display(SDL_Surface * );
void Game_Free();

#endif 
//-----------------------AYMANE TALIBI-----------------------------------
