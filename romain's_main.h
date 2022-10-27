//
// Created by romai on 27/10/2022.
//

#ifndef PROJET_C_DICTIONNAIRE_ROMAIN_S_MAIN_H
#define PROJET_C_DICTIONNAIRE_ROMAIN_S_MAIN_H
#include <stdio.h>

//definition de la structure qui va contenir des lettres et de nombreux elements en plus

typedef struct s_node_letter
{
    char lettre;
    int nb_enfant;
    liste_lecteur enfants;
    struct s_node_letter suivant;
}t_node_letter,*p_node_letter;

#endif //PROJET_C_DICTIONNAIRE_ROMAIN_S_MAIN_H
