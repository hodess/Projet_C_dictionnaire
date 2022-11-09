//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_NOM_H
#define MAIN_C_NOM_H

typedef struct node_nom_s {
    char forme_flechie[40];
    int genre;              //Mas = 1; Fem = 2; InvGen = 3
    int pluriel;            //PL = 1; SG = 2; InvPL = 3; InvSG = 4
    struct node_nom_s * next;

}node_nom, *p_node_nom;

p_node_nom searchNom(char word, p_node_nom nom);      //retourne NULL si il n'existe pas

void addNom(char adding_word[40], p_node_nom spot, int genre, int pluriel);

#endif //MAIN_C_NOM_H
