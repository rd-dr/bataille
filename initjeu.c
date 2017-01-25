#include "initjeu.h"

typedef enum couleur couleur;
enum couleur
{
	carreau = 1,
	pique  	= 2,
	coeur 	= 3,
	trefle 	= 4
};

void initjeu(Carte *jeu)
//void initjeu()
{
    printf("Initialise \n");
    Carte car7 = {7,carreau};
    jeu[0] = car7;
	Carte co7 = {7,coeur};
    jeu[1] = co7;

    int i, j=0;
    for(i = 7; i<15; i++)
    {
    	Carte car = {i, carreau};
    	jeu[j] = car;
    	j++;
    	Carte piq = {i, pique};
    	jeu[j] = piq;
    	j++;
    	Carte coe = {i, coeur};
    	jeu[j] = coe;
    	j++;
    	Carte tre = {i, trefle};
    	jeu[j] = tre;
    	j++;
    }
}