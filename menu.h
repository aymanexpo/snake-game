
/*
***************************************************
menu.h
****************************************************
Fonctions de d'écran menu
****************************************************
par : --------AYMANE TALIBI-----------------------------------
*/
#ifndef __MENU_H__
#define __MENU_H__
//-----------------------AYMANE TALIBI-----------------------------------
#include <sdl/sdl.h>
//-----------------------AYMANE TALIBI-----------------------------------
int Menu_Load();
int Menu_HandleEvents(SDL_Event * );
void Menu_Display(SDL_Surface * );
void Menu_Free();


#endif //-----------------------AYMANE TALIBI-----------------------------------

