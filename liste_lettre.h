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
p_liste_lettre recherche_lettre(char,p_liste_lettre);
int recherche_mot(char[30],struct s_node_letter*);
void afficher_liste_lettre(p_liste_lettre liste);

#endif //MAIN_C_LISTE_LETTRE_H
