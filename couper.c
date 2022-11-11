//
// Created by Gigi on 11/11/2022.
//

#include "couper.h"

void sinder_petite_chaine(char* fichier)
{

    char* subligne[8];
    char * separateur = "\t:";
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
        printf("subligne final = %s\n",subligne_final[x]);
    }
    for (int y = i-1; y>=3; y--) {
        int w = 0;
        char *temp[8];
        printf("subligne = %s\n", subligne[y]);
        temp[w] = strtok(subligne[y], "+");
        while (temp[w] != NULL) {
            printf("temp = %s\n", temp[w]);
            w++;
            temp[w] = strtok(NULL, "+");


        }
    }

        /*for (int v = 0; v < 3; v++)
        {
            if(temp[v] !=NULL)
            {
                subligne_final[3+v] = temp[v];
                printf("subfinal = %s\n",subligne_final[3+v]);
            }

        }


        for (int v =0; v< 8;v++)
        {
            if (subligne_final[v] != NULL)
            {
                printf(" %s\t\t", subligne_final[v]);
            }
        }
        printf("\n\n\n");
    }*/


    //ajouter la ligne
}
