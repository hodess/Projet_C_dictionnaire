//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_NOM_H
#define MAIN_C_NOM_H

typedef struct node_nom_s {
    char forme_flechie[40];
    char genre[6];              //Mas Fem InvGen
    char pluriel[5];            //PL SG InvPL InvSG
    struct node_nom_s * next;

}node_nom, *p_node_nom;

p_node_nom searchNom(char word, p_node_nom nom);      //retourne NULL si il n'existe pas

void addNom(char new, p_node_nom spot, char genre, char pluriel);

#endif //MAIN_C_NOM_H
