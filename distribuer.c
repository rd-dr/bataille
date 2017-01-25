#include "distribuer.h"

void distribution(Carte jeu[], Carte jeu1[], Carte jeu2[])
{
    int i=0;
    int j=0;
    for(i=0; i<32; i=i+2)
    {
        jeu1[j]=jeu[i];
        jeu2[j]=jeu[i+1];
        j++;
    }    
}
