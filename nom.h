//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_NOM_H
#define MAIN_C_NOM_H

typedef struct node_nom_s {
    char* forme_flechie;
    int genre;              //Mas = 1; Fem = 2; InvGen = 3
    int pluriel;            //PL = 1; SG = 2; InvPL = 3; InvSG = 4
    struct node_nom_s * next;

}node_nom, *p_node_nom;

p_node_nom searchNom(int genre, int pluriel, p_node_nom nom);      //retourne NULL si il n'existe pas

p_node_nom addNom(char* adding_word, p_node_nom spot, char* genre, char* pluriel);

#endif //MAIN_C_NOM_H
