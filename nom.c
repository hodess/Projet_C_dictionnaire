//
// Created by moraz on 08/11/2022.
//

#include "nom.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "convert.h"

p_node_nom searchNom(int genre, int pluriel, p_node_nom nom){
    while (genre != nom->genre || pluriel != nom->pluriel){
        if (nom->next == NULL) {
            return NULL;
        }
        nom = nom->next;
    }
    return nom;
}

p_node_nom addNom(char* adding_word, p_node_nom spot, char* genre, char* pluriel){
    int pluriel_int = convert(pluriel);
    int genre_int = convert(genre);
    p_node_nom adding_node = (p_node_nom) malloc(sizeof(node_nom));
    adding_node->forme_flechie=(char*) malloc(30*sizeof(char));
    strcpy(adding_word, adding_node->forme_flechie);
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