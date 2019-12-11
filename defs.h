/*
***************************************************
defs.h
****************************************************
Constantes symboliques
****************************************************
par ://-----------------------AYMANE TALIBI-----------------------------------
*/
//-----------------------AYMANE TALIBI-----------------------------------
#ifndef __DEFS_H__
#define __DEFS_H__
//-----------------------AYMANE TALIBI-----------------------------------
#define BLOCK_W	16
#define BLOCK_H	16
#define NBLOCKS_W	32
#define NBLOCKS_H	32
#define WINDOW_W	BLOCK_W * NBLOCKS_W
#define WINDOW_H	BLOCK_H * NBLOCKS_H
//-----------------------AYMANE TALIBI-----------------------------------
enum {
	EVT_ACTION_EXIT , 
	EVT_ACTION_NEXT_SCREEN , 
	EVT_ACTION_PREV_SCREEN , 
	EVT_ACTION_NO_ACTION,
};
//-----------------------AYMANE TALIBI-----------------------------------
//Elements
enum{
	IT_EMPTY,
	IT_APPLE,	//Pomme
	IT_SNAKE_PART,	//Serpent
};
//-----------------------AYMANE TALIBI-----------------------------------
#endif 
//-----------------------AYMANE TALIBI-----------------------------------
