//
// Created by moraz on 08/11/2022.
//

#include "../headers/adj.h"

p_node_adj searchAdj(char word, p_node_adj adj){
    while (word != adj->forme_flechie){
        if (adj->next == NULL) {
            return NULL;
        }
        adj = adj->next;
    }
    return adj;
};