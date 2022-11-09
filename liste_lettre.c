//
// Created by romai on 03/11/2022.
//

#include "liste_lettre.h"

//fonciton qui sert a crée un maillon d'une liste de lettre
p_liste_lettre creation_maillon_liste_lettre(struct s_node_letter* p)
{
    p_liste_lettre temp=(p_liste_lettre) malloc(sizeof(t_liste_lettre));
    temp->suivant=NULL;
    temp->node_lettre=p;
    return temp;
}

p_liste_lettre recherche_lettre(char lettre,p_liste_lettre liste)
{
    p_liste_lettre p=liste;
    p_liste_lettre pre=NULL;
    while(p!=NULL)
    {
        if(p->node_lettre->lettre==lettre)
        {
            return p;
        }
        else if(p->node_lettre->lettre<lettre)
        {
            pre=p;
            p=p->suivant;
        }
        else
        {
            return pre;
        }
    }
    return pre;
}

int recherche_mot(char mot[30],p_liste_lettre rac)
{
    p_node_letter pre;
    int i=0;
    int verif=1;
    while(mot[i]!='\0' && verif)
    {

    }
}