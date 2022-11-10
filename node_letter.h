//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_NODE_LETTER_H
#define MAIN_C_NODE_LETTER_H
#include "liste_lettre.h"
#include <stdlib.h>
#include <stdio.h>

struct s_liste_lettre;

typedef struct s_nom
{
    int a;
}*p_nom;

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


#endif //MAIN_C_NODE_LETTER_H
