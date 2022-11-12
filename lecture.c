//
// Created by Gigi on 11/11/2022.
//

#include "lecture.h"
void lecture_fichier(FILE*text)
{
    char fichier[99];
    if (text != NULL)
    {
        while(fgets(fichier,99,text) != NULL)
        {
            sinder_petite_chaine(fichier);
        }
    }
    else
    {
        printf("fichier pas ouvert");
    }
    printf("fini lecture\n");
    fclose(text);
}
