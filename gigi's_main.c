//
// Created by Gigi on 27/10/2022.
//

#include "gigi's_main.h"

void start_gigi()
{
    srand(time(NULL));
    FILE* text;
    text = fopen("dictionnaire_non_accentue.txt","r");
    p_node_letter* tab_rac;
    tab_rac=lecture_fichier(text);
    start_romain(tab_rac);
}

