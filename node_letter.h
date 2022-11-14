//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_NODE_LETTER_H
#define MAIN_C_NODE_LETTER_H
#include "liste_lettre.h"
#include <stdlib.h>
#include <stdio.h>

#include "convert.h"

#include "adj.h"
#include "adv.h"
#include "nom.h"
#include "ver.h"

struct s_liste_lettre;

//definition de la structure pour le mots flechis

typedef struct s_flechis
{
    char mot_de_base[30];
    int nb_mot_flechis;
    p_node_nom mot_flechis_nom;
    p_node_ver mot_flechis_ver;
    p_node_adj mot_flechis_adj;
    p_node_adv mot_flechis_adv;
}t_flechis,*p_flechis;


//definition de la structure qui va contenir des lettres et de nombreux elements en plus
typedef struct s_node_letter
{
    char lettre;
    int nb_enfant;
    struct s_liste_lettre* enfants;
    p_flechis mots_flechis;
}t_node_letter,*p_node_letter;


//prototye de mes definitions
p_node_letter creation_dune_branche(char);
p_node_letter ajout_dune_lettre(char, struct s_liste_lettre*, p_node_letter);
p_node_letter ajout_dun_mot(char[30], p_node_letter);
p_node_letter verif_mot_ajoute(char[30], p_node_letter);

void triage_arbre_et_ajout(char**, char**, p_node_letter*);

//definition de l'endroit qui contient les mots flechis
p_flechis creation_struct_mot_flechis(char[30]);
#endif //MAIN_C_NODE_LETTER_H
