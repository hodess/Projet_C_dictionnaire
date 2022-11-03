//
// Created by romai on 03/11/2022.
//

#include "liste_lettre.h"


//fonction qui sert a reché une lettre dans une liste
int recherche_lettre(char lettre,p_liste_lettre liste,p_node_letter pre)
{
    p_liste_lettre p=liste;
    while(p!=NULL) {
        if (p->node_lettre->lettre == lettre) {
            return 1;
        } else if (p->node_lettre->lettre < lettre) {
            pre = p->node_lettre;
            p = p->suivant;
        } else {
            return 0;
        }
    }
    return 0;
}