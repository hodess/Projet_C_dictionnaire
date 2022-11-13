//
// Created by romai on 03/11/2022.
//

#ifndef MAIN_C_NODE_LETTER_NOM_H
#define MAIN_C_NODE_LETTER_NOM_H
#include "liste_lettre.h"
#include <stdlib.h>
#include <stdio.h>

#include "adj.h"
#include "adv.h"
#include "nom.h"
#include "ver.h"

struct s_liste_lettre;

//definition de la structure pour le mots flechis

typedef struct s_nom
{
    char mot_de_base[30];
    int nb_mot_flechis;
    p_node_nom mot_flechis;
}t_nom,*p_nom;

typedef struct s_adv
{
    char mot_de_base[30];
    int nb_mot_flechis;
    p_node_adv mot_flechis;
}t_adv,*p_adv;

typedef struct s_adj
{
    char mot_de_base[30];
    int nb_mot_flechis;
    p_node_adj mot_flechis;
}t_adj,*p_adj;

typedef struct s_ver
{
    char mot_de_base[30];
    int nb_mot_flechis;
    p_node_ver mot_flechis;
}t_ver,*p_ver;

//definition de la structure qui va contenir des lettres et de nombreux elements en plus
typedef struct s_node_letter_nom
{
    char lettre;
    int nb_enfant;
    struct s_liste_lettre* enfants;
    p_nom mots_flechis;
}t_node_letter_nom,*p_node_letter_nom;


//prototye de mes definitions
p_node_letter_nom creation_dune_branche(char);
p_node_letter_nom ajout_dune_lettre(char, struct s_liste_lettre*, p_node_letter_nom);
p_node_letter_nom ajout_dun_mot(char[30], p_node_letter_nom);
p_node_letter_nom verif_mot_ajoute(char[30], p_node_letter_nom);

void triage_arbre_et_ajout(char**, char**, p_node_letter_nom*);

//definition temporaire
p_nom creation_struct_mot_flechis(char[30]);
#endif //MAIN_C_NODE_LETTER_NOM_H
