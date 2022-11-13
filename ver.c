//
// Created by moraz on 12/11/2022.
//

#include "ver.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

p_node_ver searchVer(int conjugaison, int genre, int pluriel, p_node_ver ver){
    while (genre != ver->genre || pluriel != ver->pluriel || conjugaison != ver->conjugaison){
        if (ver->next == NULL) {
            return NULL;
        }
        ver = ver->next;
    }
    return ver;
}

void addVer(char adding_word[40], p_node_ver spot, int conjugaison, int genre, int pluriel){
    p_node_ver adding_node = (p_node_ver) malloc(sizeof(node_ver));
    strcpy(adding_node->forme_flechie,adding_word);
    adding_node->conjugaison = conjugaison;
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