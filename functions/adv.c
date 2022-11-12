//
// Created by moraz on 08/11/2022.
//

#include "../headers/adv.h"
#include <stdio.h>
#include <string.h>

p_node_adv searchAdv(char word, p_node_adv adv){
    while (word != * adv->forme_flechie){
        if (adv->next == NULL) {
            return NULL;
        }
        adv = adv->next;
    }
    return adv;
}

void addAdv(char adding_word[40], p_node_adv spot){
    node_adv adding_node;
    strcpy(adding_word, adding_node.forme_flechie);
    p_node_adv temp = spot->next;
    spot->next = &adding_node;
    adding_node.next = temp;
}