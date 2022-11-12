//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_NODE_LETTER_H
#define MAIN_C_NODE_LETTER_H
#include "liste_lettre.h"
#include <stdlib.h>
#include <stdio.h>

struct s_liste_lettre;

//definition de la structure pour le mots flechis

typedef struct s_nom
{
    char mot_de_base[30];
    int nb_mot_flechis;
    //
}t_nom,*p_nom;

//definition de la structure qui va contenir des lettres et de nombreux elements en plus
typedef struct s_node_letter
{
    char lettre;
    int nb_enfant;
    struct s_liste_lettre* enfants;
    p_nom mots_flechis;
}t_node_letter,*p_node_letter;


//prototye de mes definitions
p_node_letter creation_dune_branche(char);
p_node_letter ajout_dune_lettre(char,struct s_liste_lettre*,p_node_letter);
p_nom ajout_dun_mot(char[30],p_node_letter);
int verif_mot_ajoute(char[30],p_node_letter);

//definition temporaire
p_nom creation_struct_mot_flechis(char[30]);
#endif //MAIN_C_NODE_LETTER_H
