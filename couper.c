//
// Created by Gigi on 11/11/2022.
//

#include "couper.h"

void sinder_petite_chaine(char* fichier)
{

    char* subligne[6];
    char * separateur = "\t:+";
    int i =0;
    subligne[i] = strtok(fichier,separateur);
    while ( subligne[i] != NULL)
    {
        i++;
        subligne[i] = strtok(NULL,separateur);
    }
    /*for (i =0; i< 6;i++)
    {
        if (subligne[i] != NULL)
        {
            printf(" %s\t\t",subligne[i]);
            int y =0;
            while(subligne[i][y] != '\0')
            {
                printf("%c",subligne[i][y]);
                y++;
            }
            printf("\n");
        }
    }*/

    //ajouter la ligne
}
