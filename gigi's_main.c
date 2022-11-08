//
// Created by Gigi on 27/10/2022.
//

#include "gigi's_main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start()
{
        FILE* text;
        char ligne[50];
        text = fopen("dico_10_lignes.txt","r");
        if (text != NULL)
        {
            /*while(fgets(ligne,50,text) != NULL)
            {
                printf("%s", ligne);
            }*/
            fgets(ligne,50,text);
            printf("%s", ligne);
            int nombre = int.Parse(ligne);
        }
        else
        {
            printf("fichier pas ouvert");
        }
        fclose(text);
    }
