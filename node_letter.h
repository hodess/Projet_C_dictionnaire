//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_NODE_LETTER_H
#define MAIN_C_NODE_LETTER_H
#include "liste_lettre.h"
#include <stdlib.h>
#include <stdio.h>

struct s_liste_lettre;

//definition de la structure qui va contenir des lettres et de nombreux elements en plus
typedef struct s_node_letter
{
    char lettre;
    int nb_enfant;
    struct s_liste_lettre* enfants;
    // mots flechis
}t_node_letter,*p_node_letter;


//prototye de mes definitions
p_node_letter creation_dune_branche(char);
int gestion_par_les_branches(char,int,p_node_letter);
int gestion_de_mot(char[30],int ,p_node_letter);

#endif //MAIN_C_NODE_LETTER_H
