//
// Created by Gigi on 11/11/2022.
//

#include "lecture.h"
p_node_letter_nom* lecture_fichier(FILE*text)
{

    //0 : verbe ; 1 : adverbe ; 2 : nom ; 3 : adjectif
    p_node_letter_nom* tab_rac=(p_node_letter_nom*)malloc(4 * (sizeof (p_node_letter_nom)));
    for(int i=0;i<4;i++)
    {
        tab_rac[i]= creation_dune_branche('A');
    }

    char fichier[99];
    if (text != NULL)
    {
        while(fgets(fichier,99,text) != NULL)
        {
            sinder_petite_chaine(fichier,tab_rac);
        }
    }
    else
    {
        printf("fichier pas ouvert");
    }
    printf("fini lecture\n");
    fclose(text);
    return tab_rac;
}
