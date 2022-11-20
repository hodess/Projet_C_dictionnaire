//
// Created by moraz on 12/11/2022.
//

#include "../header/ver.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

p_node_ver searchVer(int conjugaison, int pluriel, int personne, p_node_ver ver){
    while (personne != ver->personne || pluriel != ver->pluriel || conjugaison != ver->conjugaison){
        if (ver->next == NULL) {
            return NULL;
        }
        ver = ver->next;
    }
    return ver;
}

p_node_ver addVer(char* adding_word, p_node_ver spot, char* conjugaison, char* pluriel, char* personne){
    int conjugaison_int = convert(conjugaison);
    int pluriel_int = convert(pluriel);
    int personne_int = convert(personne);
    p_node_ver adding_node = (p_node_ver) malloc(sizeof(node_ver));
    adding_node->forme_flechie=(char*) malloc(30*sizeof(char));
    strcpy(adding_node->forme_flechie,adding_word);
    adding_node->conjugaison = conjugaison_int;
    adding_node->personne = personne_int;
    adding_node->pluriel = pluriel_int;
    if (spot == NULL) {
        adding_node->next=NULL;
    }
    else {
        adding_node->next = spot;
    }
    return adding_node;
}