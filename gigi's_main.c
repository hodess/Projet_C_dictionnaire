//
// Created by Gigi on 27/10/2022.
//

#include "gigi's_main.h"

void start()
{
        FILE* text;
        text = fopen("dictionnaire_non_accentue.txt","r");
        lecture_fichier(text);
}