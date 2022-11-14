//
// Created by moraz on 08/11/2022.
//

#include "adv.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

p_node_adv searchAdv(char* word, p_node_adv adv){
    while (word != * adv->forme_flechie){
        if (adv->next == NULL) {
            return NULL;
        }
        adv = adv->next;
    }
    return adv;
}

void addAdv(char* adding_word, p_node_adv spot){
    p_node_adv adding_node = (p_node_adv) malloc(sizeof(node_adv));
    strcpy(adding_node->forme_flechie, adding_word);
    if (spot == NULL) {
        spot = adding_node;
        adding_node->next = NULL;
    }
    else {
        adding_node->next = spot->next;
        spot->next = adding_node;
    }
}