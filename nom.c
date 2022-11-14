//
// Created by moraz on 08/11/2022.
//

#include "nom.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "convert.h"

p_node_nom searchNom(char* genre, char* pluriel, p_node_nom nom){
    int genre_int = convert(genre);
    int pluriel_int = convert(pluriel);
    while (genre_int != nom->genre || pluriel_int != nom->pluriel){
        if (nom->next == NULL) {
            return NULL;
        }
        nom = nom->next;
    }
    return nom;
}

void addNom(char* adding_word, p_node_nom spot, char* genre, char* pluriel){
    int genre_int = convert(genre);
    int pluriel_int = convert(pluriel);
    p_node_nom adding_node = (p_node_nom) malloc(sizeof(node_nom));
    strcpy(adding_word, adding_node->forme_flechie);
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