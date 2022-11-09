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
        if (ajout == 2) {
            break;
        }


        //tapé la lettre que l'on veut ajouté
        char lettre[10];
        printf("tape la lettre\n");
        scanf(" %s", lettre);
    }
}
