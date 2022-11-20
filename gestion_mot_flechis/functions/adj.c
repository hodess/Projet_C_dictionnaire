//
// Created by moraz on 08/11/2022.
//

#include "../header/adj.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

p_node_adj searchAdj(int genre, int pluriel, p_node_adj adj){
    while (genre != adj->genre || pluriel != adj->pluriel){
        if (adj->next == NULL) {
            return NULL;
        }
        adj = adj->next;
    }
    return adj;
}

p_node_adj addAdj(char* adding_word, p_node_adj spot, char* genre, char* pluriel){
    int pluriel_int = convert(pluriel);
    int genre_int = convert(genre);
    p_node_adj adding_node = (p_node_adj) malloc(sizeof(node_adj));
    adding_node->forme_flechie=(char*) malloc(30*sizeof(char));
    strcpy(adding_node->forme_flechie, adding_word);
    adding_node->genre = genre_int;
    adding_node->pluriel = pluriel_int;
    if (spot == NULL) {
        adding_node->next = NULL;
    }
    else {
        adding_node->next = spot;
    }
    return adding_node;
}