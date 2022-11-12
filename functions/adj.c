//
// Created by moraz on 08/11/2022.
//

#include "../headers/adj.h"
#include <stdio.h>
#include <string.h>

p_node_adj searchAdj(int genre, int pluriel, p_node_adj adj){
    while (genre != adj->genre || pluriel != adj->pluriel){
        if (adj->next == NULL) {
            return NULL;
        }
        adj = adj->next;
    }
    return adj;
}

void addAdj(char adding_word[40], p_node_adj spot, int genre, int pluriel){
    node_adj adding_node;
    strcpy(adding_word, adding_node.forme_flechie);
    adding_node.genre = genre;
    adding_node.pluriel = pluriel;
    p_node_adj temp = spot->next;
    spot->next = &adding_node;
    adding_node.next = temp;
}