//
// Created by romai on 27/10/2022.
//

#include "romain's_main.h"

void start()
{
    p_node_letter rac= creation_dune_branche('A');
    while (1) {
        //savoir si on veut l'ajouté ou la recherché
        int ajout; //1= ajout_de_lettre ; 0 = recherche
        printf("1.ajoute \n2.recherche \n3.ajout d'un mot avec verification\n");
        scanf("%d", &ajout);
        if (ajout == 0) {
            break;
        }
        printf("");


        //tapé la lettre que l'on veut ajouté

        p_node_letter verif_mot;
        char lettre[30];
        while(ajout==1 && lettre[0]!='0')
        {
            printf("tape le mot a ajoute\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                ajout_dun_mot(lettre,rac);
            }
        }
        while(ajout==2 && lettre[0]!='0')
        {
            printf("tape le mot a cherche\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                verif_mot = recherche_mot(lettre,rac);
                if (verif_mot==NULL)
                {
                    printf("le mot existe pas\n");
                }
                else
                {
                    printf("le mot existe\n");
                }

            }
        }

        while (ajout==3 && lettre[0]!='0')
        {
            printf("tape le mot a verifier et ajouter si possible\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                verif_mot = verif_mot_ajoute(lettre,rac);
                printf("Verif mot = %d\n\n",verif_mot);
            }
        }
        lettre[0]='A';
    }
}
