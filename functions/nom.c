//
// Created by moraz on 08/11/2022.
//

#include "../headers/nom.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

p_node_nom searchNom(int genre, int pluriel, p_node_nom nom){
    while (genre != nom->genre || pluriel != nom->pluriel){
        if (nom->next == NULL) {
            return NULL;
        }
        nom = nom->next;
    }
    return nom;
}

void addNom(char adding_word[40], p_node_nom spot, int genre, int pluriel){
    p_node_nom adding_node = (p_node_nom) malloc(sizeof(node_nom));
    strcpy(adding_word, adding_node->forme_flechie);
    adding_node->genre = genre;
    adding_node->pluriel = pluriel;
    if (spot == NULL) {
        spot = adding_node;
        adding_node->next = NULL;
    }
    else {
        adding_node->next = spot->next;
        spot->next = adding_node;
    }
}