//////////////////////////////////////////
//score.c
//////////////////////////////////////////
//implémentation des fonctions de gestion 
//du score
//////////////////////////////////////////
//Crée le : 10-10-2019 
//Par : -------AYMANE TALIBI-----------
//////////////////////////////////////////

//-----------------------AYMANE TALIBI-----------------------------------
#include <stdlib.h>
#include <stdio.h>
#include "score.h"
//-----------------------AYMANE TALIBI-----------------------------------
u32 LoadHiScore()
{
	FILE * fp ; 
	u32 score ; 
	
	fp = fopen("hi.score" , "rb");
	if(!fp)
		return 0;
	
	fread(&score , sizeof(u32) , 1 , fp );
	fclose(fp);
	return score ;
	
}
//-----------------------AYMANE TALIBI-----------------------------------
void SaveHiScore(u32 score)
{
	FILE * fp ; 
	
	fp = fopen("hi.score" , "wb");
	if(!fp)
		return ;
		
	fwrite(&score , sizeof(u32) , 1 , fp );
	fclose(fp);
}
//-----------------------AYMANE TALIBI-----------------------------------