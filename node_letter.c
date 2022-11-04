//
// Created by romai on 03/11/2022.
//

#include "node_letter.h"

t_rac_letter creation_de_larbre()
{
    p_rac_letter rac=(p_rac_letter) malloc(sizeof(t_rac_letter));
    rac->nb_enfants=0;
    rac->tree=NULL;
    return *rac;
}



p_node_letter creation_dune_branche(char lettre)
{
    p_node_letter node=(p_node_letter) malloc(sizeof(t_node_letter));
    node->enfants=NULL;
    node->lettre=lettre;
    node->nb_enfant=0;
    node->suivant=NULL;
    //node->mots_flechis = null
    return node;
}


int gestion_par_les_branches(char lettre,int ajout,p_node_letter tree)
{
    p_liste_lettre pre=NULL;
    int solution=recherche_lettre(lettre,tree->enfants,pre);
    if (ajout)
    {
        if (solution==1) {
            return 0;
        }
        else{
            p_node_letter temp_letter= creation_dune_branche(lettre);
            p_liste_lettre temp_liste = creation_maillon_liste_lettre(temp_letter);
            temp_liste->suivant=pre->suivant;
            pre->suivant=temp_liste;
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

int gestion_de_larbre(char lettre,int ajout,p_rac_letter rac)
{
    if(rac->tree!=NULL)
    {
        return gestion_par_les_branches(lettre,ajout,rac->tree);
    }
    else
    {
        if (ajout) {
            rac->tree = creation_dune_branche(lettre);
            return 1;
        }
        else
            return 0;
    }
}


