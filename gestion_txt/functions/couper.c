//
// Created by Gigi on 11/11/2022.
//

#include "../header/couper.h"

void sinder_petite_chaine(char* fichier, p_node_letter* tab_rac)
{

    char* subligne[8];
    char * separateur = "\t:\n";
    char *temp[8];
    int i =0;
    subligne[i] = strtok(fichier,separateur);
    while ( subligne[i] != NULL)
    {
        i++;
        subligne[i] = strtok(NULL,separateur);
    }

    char* subligne_final[6];
    for(int x =0 ; x < 3; x++)
    {
        subligne_final[x] = subligne[x];
    }
    for (int y = i-1; y>=3; y--) {
        int w = 0;
        temp[w] = strtok(subligne[y], "+");
        while (temp[w] != NULL) {
            w++;
            temp[w] = strtok(NULL, "+");
        }
        triage_arbre_et_ajout(subligne_final,temp,tab_rac);
    }
    if(i==3)
    {
        triage_arbre_et_ajout(subligne_final,NULL,tab_rac);
    }
}
//ajouter la ligne

