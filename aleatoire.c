//
// Created by romai on 11/11/2022.
//

#include "aleatoire.h"

int* aleatoire_mot_flechis(p_flechis mot_flechis)
{
    int aleatoire=rand()%mot_flechis->nb_mot_flechis;
    printf("%d\n",mot_flechis->nb_mot_flechis);
    p_node_nom temp=mot_flechis->mot_flechis_nom;
    //se balader dans le mot flechis
    for(int i=0;i<aleatoire;i++)
    {
        temp=temp->next;
    }

    int* type_mot = (int*) malloc(2*(sizeof (int)));
    type_mot[0]=temp->genre;
    type_mot[1]=temp->pluriel;
    return type_mot;
}

//cette fonction sert a ressortir un enfant de maniere aleatoire
p_node_letter aleatoire_lettre_nom(p_node_letter tree)
{
    //compter le nombre d'enfant pour savoir notre nombre de posibilité
    int nb_possibilité=tree->nb_enfant;
    int indice = (rand()%nb_possibilité);
    //se palcer au bonne endroit en fonction du chiffre aleatoire recu
    p_liste_lettre next=tree->enfants;
    for(int i=0;i<indice;i++)
    {
        next=next->suivant;
    }
    return next->node_lettre;
}

//cette fonction a avoir un mot flechis aleatoir retourné
p_node_letter aleatoire_mot_nom(p_node_letter rac)
{
    int aleatoire;
    p_node_letter tree = rac;
    while(1)
    {
        if(tree->nb_enfant==0)
        {
            return tree;
        }
        else
        {
            aleatoire = (rand() % 20);
            if(aleatoire == 0 && tree->mots_flechis!=NULL)
            {
                return tree;
            }
            else if( tree->nb_enfant==1)
            {
                tree=tree->enfants->node_lettre;
            }
            else
            {
                tree= aleatoire_lettre_nom(tree);
            }
        }
    }
}