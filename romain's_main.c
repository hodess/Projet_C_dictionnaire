//
// Created by romai on 27/10/2022.
//

#include "romain's_main.h"

void start()
{
    srand(time(NULL));
    p_node_letter rac= creation_dune_branche('A');
    while (1) {
        //savoir si on veut l'ajouté ou la recherché
        int ajout; //1= ajout_de_lettre ; 0 = recherche
        printf("1.ajout d'un mot avec verification\n2.recherche \n3.genere un mot aleatoire\n");
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
                verif_mot_ajoute(lettre,rac);
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
        if(ajout==3)
        {
            p_node_letter node_aleatoire = aleatoire_mot(rac);
            printf("mot trouvé : %p , %c\n",node_aleatoire->mots_flechis,node_aleatoire->lettre);
        }
        lettre[0]='A';
    }
}
