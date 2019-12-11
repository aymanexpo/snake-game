/*
***************************************************
snake.h
****************************************************
Déclaration des structures & fonction liées 
à l'utilisation d'une liste chainée pour le déplacement
du serpent
****************************************************
par :----AYMANE TALIBI-------eleve ingenieur informatique MIAGE-------
*/

#ifndef __LIST_H__
#define __LIST_H__
//-----------------------AYMANE TALIBI-----------------------------------
#include "stdinc.h"
//-----------------------AYMANE TALIBI-----------------------------------

typedef struct snode_t SNode_t ;
//-----------------------AYMANE TALIBI-----------------------------------
struct snode_t
{
	int x , y ; 
	int vx , vy ; 
	SNode_t * next ;
};
//-----------------------AYMANE TALIBI-----------------------------------
typedef struct slist_t
{
	SNode_t * first ; 
	SNode_t * last ; 
	
}SList_t ;
//-----------------------AYMANE TALIBI-----------------------------------
void SList_Init(SList_t * list);
void SList_Push(SList_t * list);
//-----------------------AYMANE TALIBI-----------------------------------
//O(n)
int SList_IsOnSnake(SList_t * list , int x , int y , int with_first);
//-----------------------AYMANE TALIBI-----------------------------------
//O(n)
void SList_SnakeMove(SList_t * list);

void SList_SetVector(SList_t * list , int vx , int vy);
void SList_DisplaySnake(SList_t * list , u8 * data);
void SList_Free();

#endif
//-----------------------AYMANE TALIBI-----------------------------------
