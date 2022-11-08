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

void addAdj(char adding_word[40], p_node_adj spot, char genre[6], char pluriel[5]){
    node_adj adding_node;
    adding_node.forme_flechie = adding_word;
    adding_node.genre = genre;
    adding_node.pluriel = pluriel;
    p_node_adj temp = spot->next;
    spot->next = &adding_node;
    adding_node.next = temp;
};