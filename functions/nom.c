//
// Created by moraz on 08/11/2022.
//

#include "../headers/nom.h"
#include <stdio.h>

p_node_nom searchName(char word, p_node_nom nom){
    while (word != nom->forme_flechie){
        if (nom->next == NULL) {
            return NULL;
        }
        nom = nom->next;
    }
    return nom;
};