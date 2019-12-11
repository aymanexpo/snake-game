//////////////////////////////////////////
//gfxutils.h
//////////////////////////////////////////
//Déclarations des 
//fonctions utilitaires liés au graphisme
//////////////////////////////////////////
////-----------------------AYMANE TALIBI-----------------------------------
//////////////////////////////////////////

//-----------------------AYMANE TALIBI-----------------------------------
#ifndef __GFXUTILS_H__
#define __GFXUTILS_H__
//-----------------------AYMANE TALIBI-----------------------------------
#include "stdinc.h"
#include <sdl/sdl.h>
//-----------------------AYMANE TALIBI-----------------------------------
void GFX_FontPrint(SDL_Surface * dst , SDL_Surface * fbmp , 
			int glyph_w, int glyph_h, u8 start , 
			char * buf , u32 max_buf , 
			int x , int y);
			
#endif 
//-----------------------AYMANE TALIBI-----------------------------------
