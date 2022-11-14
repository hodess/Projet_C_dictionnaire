//
// Created by moraz on 12/11/2022.
//

#include "ver.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "convert.h"

p_node_ver searchVer(char* conjugaison, char* pluriel, char* personne, p_node_ver ver){
    int conjugaison_int = convert(conjugaison);
    int pluriel_int = convert(pluriel);
    int personne_int = convert(personne);
    while (personne_int != ver->personne || pluriel_int != ver->pluriel || conjugaison_int != ver->conjugaison){
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
    strcpy(adding_node->forme_flechie,adding_word);
    adding_node->conjugaison = conjugaison_int;
    adding_node->personne = personne_int;
    adding_node->pluriel = pluriel_int;
    if (spot == NULL) {
        printf("IF\n");
        spot = adding_node;
        adding_node->next = NULL;
    }
    else {
        printf("ELSE\n");
        adding_node->next = spot->next;
        spot->next = adding_node;
    }
    return spot;
}
