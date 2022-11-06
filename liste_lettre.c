//
// Created by romai on 03/11/2022.
//

#include "liste_lettre.h"

//fonciton qui sert a crée un maillon d'une liste de lettre
p_liste_lettre creation_maillon_liste_lettre(struct t_node_letter* p)
{
    p_liste_lettre temp=(p_liste_lettre) malloc(sizeof(t_liste_lettre));
    temp->suivant=NULL;
    temp->node_lettre=p;
    return temp;

}

//fonction qui sert a reché une lettre dans une liste
int recherche_lettre(char lettre,p_liste_lettre liste,p_liste_lettre pre)
{
    p_liste_lettre p=liste;
    while(p!=NULL) {
        if (p->node_lettre->lettre == lettre) {
            return 1;
        } else if (p->node_lettre->lettre < lettre) {
            pre = p;
            p = p->suivant;
        } else {
            return 0;
        }
    }
    return 0;
}