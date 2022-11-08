//
// Created by moraz on 08/11/2022.
//

#include "../headers/adv.h"

p_node_adv searchAdv(char word, p_node_adv adv){
    while (word != adv->forme_flechie){
        if (adv->next == NULL) {
            return NULL;
        }
        adv = adv->next;
    }
    return adv;
};