#include <stdio.h>
#include <stdlib.h>


typedef struct carte
{
int valeur;
int couleur;
} Carte;


int main()
{
Carte jeu[32];
Carte jeu1[32]; /* cartes du joueur 1 */
Carte jeu2[32]; /* cartes du joueur 1 */

int nbcoup=0;

int N1=15; /* indice de la derniere carte joueur 1 */
int N2=15;

//initjeu(jeu);

//affiche_carte(jeu[0]);

//affiche(jeu,32);

//affiche(jeu,2);

//permutte(&jeu[0],&jeu[1]);

//affiche(jeu,2);

//srand(time(NULL));
//alea32();

//affiche(jeu,32);

// mélange du jeux
//srand(12500); /* initialisation du g ?en ?erateur al ?eatoire */
srand(time(NULL));

//melange(jeu);

// affiche après mélange
//affiche(jeu,32);

//distribution(jeu,jeu1,jeu2);

printf("Affiche carte joueur 1 :\n");
//affiche(jeu1,16);

printf("Affiche carte joueur 2 :\n");
//affiche(jeu2,16);

//while () /* tant que la partie n’est pas terminee */

//printf("Test j1 vs j2 :\n");

//affiche_carte(jeu1[0]);

//affiche_carte(jeu2[0]);


/*while(N1>0 && N2>0)
{
	jouer1coup(jeu1,jeu2,&N1,&N2);
	nbcoup++;
	printf("Nb carte joueur1=%d \n",N1);
	printf("Nb carte joueur2=%d \n",N2);
}
*/


/* afficher qui gagne et en combien de coups */
if(N1==0)
	printf("Joueur n°1 a gagné en %d coups\n",nbcoup);

if(N2==0)
	printf("Joueur n°2 a gagné en %d coups\n",nbcoup);
	
return 0;

}
