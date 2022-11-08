//
// Created by romai on 27/10/2022.
//

#include "romain's_main.h"

void start()
{
    p_node_letter rac= creation_dune_branche('A');
    while (1) {
        //savoir si on veut l'ajouté ou la recherché
        int ajout; //1= ajout ; 0 = recherche
        printf("\n\najoute ou recherche\n");
        scanf("%d", &ajout);
        if (ajout == 2) {
            break;
        }


        //tapé la lettre que l'on veut ajouté
        char lettre[10];
        printf("tape la lettre\n");
        scanf(" %s", lettre);


        int num = gestion_de_mot(lettre, ajout, rac);
        printf("%d\n", rac->nb_enfant);
        afficher_liste_lettre(rac->enfants);


        //affichage
        /*
        printf("num = %d , ajout = %d\n",num,ajout);
        if (ajout)
        {
            if(num)
                printf("cela a bien etait ajouté");
            else
                printf("cela n'a pas pu etre ajouté car la valeur existe deja ");
        }
        else
        {
            if(num)
                printf("la valeur existe bien");
            else
                printf("la valeur n'existe pas");
        }*/

    }
    p_node_letter p=rac;
    for(int i=0;i<7;i++)
    {
        printf("%d",i);
        afficher_liste_lettre(p->enfants);
        p=p->enfants->node_lettre;
    }
    printf("\n\n");
    p=rac;
    for(int i=0;i<7;i++)
    {
        afficher_liste_lettre(p->enfants);
        if(i==3)
            p=p->enfants->suivant->node_lettre;
        else
            p=p->enfants->node_lettre;
    }
}
