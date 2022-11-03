//
// Created by romai on 03/11/2022.
//

#include "node_letter.h"

t_rac_letter creation_de_larbre()
{
    t_rac_letter rac;
    rac.nb_enfants=0;
    rac.tree=NULL;
    return rac;
}



p_node_letter creation_dune_branche(char lettre)
{
    p_node_letter node;
    node->enfants=NULL;
    node->lettre=lettre;
    node->nb_enfant=0;
    node->suivant=NULL;
    //node->mots_flechis = nul
    return node;
}


int gestion_par_les_branches(char lettre,int ajout,p_rac_letter rac)
{

}

int gestion_de_larbre(char lettre,int ajout,p_rac_letter rac)
{
    if(rac->tree!=NULL)
    {
        return gestion_par_les_branches(lettre,ajout,rac);
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


