//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_NODE_LETTER_H
#define MAIN_C_NODE_LETTER_H
#include "liste_lettre.h"

//definition de la structure qui va contenir des lettres et de nombreux elements en plus
typedef struct s_node_letter
{
    char lettre;
    int nb_enfant;
    p_liste_lettre enfants;
    struct s_node_letter suivant;
}t_node_letter,*p_node_letter;

//definition de la structure de la racine de l'arbre avec son nombre d'enfant
typedef struct s_rac_letter
{
    int nb_enfants;
    p_node_letter tree;
}t_rac_letter,*p_rac_letter;


#endif //MAIN_C_NODE_LETTER_H
