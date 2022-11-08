//
// Created by moraz on 27/10/2022.
//

#include "nolan.h"
#include <stdio.h>

void add(char genre, char pluriel){

};

p_node_nom searchName(char word, p_node_nom nom){
    while (word != nom->forme_flechie){
        if (nom->next == NULL) {
            return NULL;
        }
        nom = nom->next;
    }
    return nom;
};

p_node_adj searchAdj(char word, p_node_adj adj){
    while (word != adj->forme_flechie){
        if (adj->next == NULL) {
            return NULL;
        }
        adj = adj->next;
    }
    return adj;
};


p_node_adv searchAdv(char word, p_node_adv adv){
    while (word != adv->forme_flechie){
        if (adv->next == NULL) {
            return NULL;
        }
        adv = adv->next;
    }
    return adv;
};