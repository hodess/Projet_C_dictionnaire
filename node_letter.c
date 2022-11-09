//
// Created by romai on 03/11/2022.
//

#include "node_letter.h"


p_node_letter creation_dune_branche(char lettre)
{
    p_node_letter node=(p_node_letter) malloc(sizeof(t_node_letter));
    node->enfants=NULL;
    node->lettre=lettre;
    node->nb_enfant=0;
    node->mots_flechis = NULL;
    return node;
}

int ajout(char lettre,p_node_letter tree)
{
    p_node_letter pre=NULL;
    re
}