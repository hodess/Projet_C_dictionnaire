//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_ADJ_H
#define MAIN_C_ADJ_H
#include "../../genere_phrase/header/convert.h"
typedef struct node_adj_s {
    char* forme_flechie;
    int genre;              //Mas = 1; Fem = 2; InvGen = 3
    int pluriel;            //PL = 1; SG = 2; InvPL = 3; InvSG = 4
    struct node_adj_s * next;

}node_adj, *p_node_adj;

p_node_adj searchAdj(int genre, int pluriel, p_node_adj adj);      //retourne NULL si il n'existe pas

p_node_adj addAdj(char* adding_word, p_node_adj spot, char* genre, char* pluriel);

#endif //MAIN_C_ADJ_H
