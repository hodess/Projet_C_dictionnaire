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

//cela sert a chercher une lettre dans une liste d'enfant
//on retourne soit le bon pointeur soit le precedent pour faire un ajout de maniere simple
p_liste_lettre recherche_lettre(char lettre,p_liste_lettre liste)
{
    p_liste_lettre p=liste;
    p_liste_lettre pre=NULL;
    while(p!=NULL)
    {
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
    return pre;
}

//cela sert a rechecher un mot et retourne la derniere cellule pour que 'lon puisse garder le mot flechis
p_node_letter recherche_mot(char mot[30], p_node_letter rac)
{
    p_liste_lettre pro;
    p_node_letter tree=rac;
    int i=0;
    while(mot[i]!='\0')
    {
        //si une node ne contient aucun enfant alors on dit qu'elle ne peut pas contenir le mot
        if (tree->nb_enfant==0)
        {
            return NULL;
        }
        pro= recherche_lettre(mot[i],tree->enfants);
        //cela voudrais dire que lettre que l'onj recherche une lettre plus petite que la plus petite de la liste. En d'autre terme on cherche une lettre que l'on a pas
        if (pro==NULL)
        {
            return NULL;
        }
        else {
            //si la lettre alors on continue avec la prochaine
            if (pro->node_lettre->lettre == mot[i]) {
                tree = pro->node_lettre;
            } else {
                return NULL;
            }
        }
        i++;
    }
    //si il contient des mots alors le mots existe
    if(tree->mots_flechis!=NULL)
    {
        return tree;
    }
        //si il en contient pas alors le mots n'existe pas
    else
    {
        return NULL;
    }
}

//cela serta afficher les enfants
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