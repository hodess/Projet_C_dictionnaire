//
// Created by moraz on 08/11/2022.
//

#include "adj.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "convert.h"

p_node_adj searchAdj(char* genre, char* pluriel, p_node_adj adj){
    int genre_int = convert(genre);
    int pluriel_int = convert(pluriel);
    while (genre_int != adj->genre || pluriel_int != adj->pluriel){
        if (adj->next == NULL) {
            return NULL;
        }
        adj = adj->next;
    }
    return adj;
}

void addAdj(char* adding_word, p_node_adj spot, char* genre, char* pluriel){
    int genre_int = convert(genre);
    int pluriel_int = convert(pluriel);
    p_node_adj adding_node = (p_node_adj) malloc(sizeof(node_adj));
    strcpy(adding_node->forme_flechie, adding_word);
    adding_node->genre = genre_int;
    adding_node->pluriel = pluriel_int;
    if (spot == NULL) {
        spot = adding_node;
        adding_node->next = NULL;
    }
    else {
        adding_node->next = spot->next;
        spot->next = adding_node;
    }
}