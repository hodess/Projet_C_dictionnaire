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
        printf("ajoute ou recherche\n");
        scanf("%d", &ajout);
        if (ajout == 0) {
            break;
        }


        //tapé la lettre que l'on veut ajouté

        int verif_mot;
        char lettre[30];
        while(ajout && lettre[0]!='0')
        {
            printf("tape la lettre\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                ajout_dun_mot(lettre,rac);
            }
        }
        while(ajout==2 && lettre[0]!='0')
        {
            printf("tape la lettre\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                verif_mot = recherche_mot(lettre,rac);
                printf("Verif mot = %d\n\n",verif_mot);
            }
        }

    }
}
