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

p_node_letter ajout_dune_lettre(char lettre,p_liste_lettre pre,p_node_letter ancienne_lettre)
{
    printf("%p\t",pre);
    p_node_letter temp_lettre = creation_dune_branche(lettre);
    p_liste_lettre temp_liste = creation_maillon_liste_lettre(temp_lettre);
    ancienne_lettre->nb_enfant+=1;
    if (pre==NULL)
    {
        temp_liste->suivant = ancienne_lettre->enfants;
        ancienne_lettre->enfants=temp_liste;
        printf("pre = NULL\n");
        afficher_liste_lettre(ancienne_lettre->enfants);
        return temp_liste->node_lettre;
    }
    else
    {
        printf("%p\n",pre);
        printf("%p : %c",temp_liste,temp_liste->node_lettre->lettre);
        temp_liste->suivant=pre->suivant;
        pre->suivant=temp_liste;
        afficher_liste_lettre(ancienne_lettre->enfants);
        return temp_liste->node_lettre;
    }
}

p_nom ajout_dun_mot(char mot[30],p_node_letter rac)
{
    int i=0;
    p_node_letter tree=rac;
    p_liste_lettre pre=NULL;
    while (mot[i]!='\0')
    {
        pre=recherche_lettre(mot[i],tree->enfants);
        if (pre==NULL)
        {
            tree=ajout_dune_lettre(mot[i],pre,tree);
        }
        else
        {
            if(pre->node_lettre->lettre==mot[i])
            {
                tree=pre->node_lettre;
            }
            else
            {
                tree=ajout_dune_lettre(mot[i],pre,tree);
            }
        }
        i++;
    }
    return tree->mots_flechis;
}

int verif_mot_ajoute(char mot[30],p_node_letter rac)
{
    int verif_recherche= recherche_mot(mot,rac);
    if (verif_recherche==0)
    {
        printf("le mot s'ajoute\n");
        ajout_dun_mot(mot,rac);
    }
    else
    {
        printf("le mot existe deja\n");
    }
    return verif_recherche;
}