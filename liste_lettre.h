//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_LISTE_LETTRE_H
#define MAIN_C_LISTE_LETTRE_H
#include "node_letter.h"

//definition de la structure qui va contenire les enfant des nodes
typedef struct s_liste_lettre
{
    p_node_letter lettre;
    struct s_liste_lettre suivant;
}t_liste_lettre,*p_liste_lettre;


#endif //MAIN_C_LISTE_LETTRE_H
