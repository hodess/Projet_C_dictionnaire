//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_LISTE_LETTRE_H
#define MAIN_C_LISTE_LETTRE_H
#include <stdlib.h>
#include "node_letter.h"
struct s_node_letter;

//definition de la structure qui va contenire les enfant des nodes
typedef struct s_liste_lettre
{
    struct s_node_letter* node_lettre;
    struct s_liste_lettre *suivant;
}t_liste_lettre,*p_liste_lettre;


p_liste_lettre creation_maillon_liste_lettre(struct s_node_letter*);
int recherche_lettre(char,p_liste_lettre,p_liste_lettre*);

#endif //MAIN_C_LISTE_LETTRE_H
