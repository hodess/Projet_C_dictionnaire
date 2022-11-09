//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_ADJ_H
#define MAIN_C_ADJ_H

typedef struct node_adj_s {
    char forme_flechie[40];
    int genre;              //Mas = 1; Fem = 2; InvGen = 3
    int pluriel;            //PL = 1; SG = 2; InvPL = 3; InvSG = 4
    struct node_adj_s * next;

}node_adj, *p_node_adj;

p_node_adj searchAdj(char word, p_node_adj adj);      //retourne NULL si il n'existe pas

void addAdj(char adding_word[40], p_node_adj spot, int genre, int pluriel);

#endif //MAIN_C_ADJ_H
