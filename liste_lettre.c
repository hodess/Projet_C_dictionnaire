//
// Created by romai on 03/11/2022.
//

#include "liste_lettre.h"

//fonciton qui sert a crée un maillon d'une liste de lettre
p_liste_lettre creation_maillon_liste_lettre(p_node_letter p)
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
    printf("recherche\n");
    while(p!=NULL)
    {
        printf("%p\n\n",p->node_lettre);
        //si le p est egale a la lettre je l'a renvoie
        if(p->node_lettre->lettre==lettre)
        {
            return p;
        }
        //si la lettre est plus petite alors je continue de parcourir ma chaine
        else if(p->node_lettre->lettre<lettre)
        {
            pre=p;
            p=p->suivant;
        }
        //si la lettre est plus grande alors je retourne le precedent pour facilité l'ajout
        else
        {
            return pre;
        }
    }
    printf("%p\n\n",p);
    return pre;
}

int recherche_mot(char mot[30],p_node_letter rac)
{
    p_liste_lettre pro;
    p_node_letter tree=rac;
    int i=0;
    while(mot[i]!='\0')
    {
        //si une node ne contient aucun enfant alors on dit qu'elle ne peut pas contenir le mot
        if (tree->nb_enfant==0)
        {
            return 0;
        }
        pro= recherche_lettre(mot[i],tree->enfants);
        printf("enfant de %c nb enfant = %d : \t",tree->lettre,tree->nb_enfant);
        afficher_liste_lettre(tree->enfants);
        if(pro->node_lettre->lettre==mot[i])
        {
            tree=pro->node_lettre;
        }
        else
        {
            return 0;
        }
        i++;
    }
    //si il contient des mots alors le mots existe
    if(tree->mots_flechis!=NULL)
    {
        return 1;
    }
    //si il en contient pas alors le mots n'existe pas
    else
    {
        return 2;
    }
}

void afficher_liste_lettre(p_liste_lettre liste)
{
    p_liste_lettre p=liste;
    while(p!=NULL)
    {
        printf("%p : %c\t",p->node_lettre,p->node_lettre->lettre);
        p=p->suivant;
    }
    printf("\n");
}