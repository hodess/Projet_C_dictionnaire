//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_ADJ_H
#define MAIN_C_ADJ_H

p_node_adj searchAdj(char word, p_node_adj adj);      //retourne NULL si il n'existe pas

typedef struct node_adj_s {
    char forme_flechie[40];
    char genre[6];              //Mas Fem InvGen
    char pluriel[5];            //PL SG InvPL InvSG
    struct node_nom_s * next;

}node_adj, *p_node_adj;

#endif //MAIN_C_ADJ_H
