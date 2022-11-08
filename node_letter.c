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
    //node->mots_flechis = null
    return node;
}


int gestion_par_les_branches(char lettre,int ajout,p_node_letter tree)
{
    p_liste_lettre pre=NULL;
    int solution=recherche_lettre(lettre,tree->enfants,&pre);
    if (ajout)
    {
        if (solution==1) {
            return 0;
        }
        else{
            if (pre==NULL)
            {
                p_node_letter temp_letter= creation_dune_branche(lettre);
                p_liste_lettre temp_liste = creation_maillon_liste_lettre(temp_letter);
                tree->enfants=temp_liste;
            }
            else
            {
                p_node_letter temp_letter= creation_dune_branche(lettre);
                p_liste_lettre temp_liste = creation_maillon_liste_lettre(temp_letter);
                temp_liste->suivant=pre->suivant;
                pre->suivant=temp_liste;
            }
            tree->nb_enfant+=1;
            return 1;
        }
    }
    else
    {
        if (solution==1) {
            return 1;
        }
        else{
            return 0;
        }
    }
}


int gestion_de_mot(char mot[30],int ajout,p_node_letter tree)
{
    int i=0;
    p_node_letter p=tree;
    while(mot[i]!='\0')
    {
        gestion_par_les_branches(mot[i],ajout,p);
        p=p->enfants->node_lettre;
        i++;
    }
    return 0;
}



