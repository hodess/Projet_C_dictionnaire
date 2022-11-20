//
// Created by moraz on 08/11/2022.
//

#include "../header/adv.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

p_node_adv searchAdv(int word, p_node_adv adv){
    while (strcmp(word, adv->forme_flechie) != 0 ){
        if (adv->next == NULL) {
            return NULL;
        }
        adv = adv->next;
    }
    return adv;
}

p_node_adv addAdv(char* adding_word, p_node_adv spot){
    p_node_adv adding_node = (p_node_adv) malloc(sizeof(node_adv));
    adding_node->forme_flechie=(char*) malloc(30*sizeof(char));
    strcpy(adding_node->forme_flechie, adding_word);
    if (spot == NULL) {
        adding_node->next = NULL;
    }
    else {
        adding_node->next = spot;
    }
    return adding_node;
}