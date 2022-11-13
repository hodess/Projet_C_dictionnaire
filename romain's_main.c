//
// Created by romai on 27/10/2022.
//

#include "romain's_main.h"

//0 : verbe ; 1 : adverbe ; 2 : nom ; 3 : adjectif
void start_romain(p_node_letter* tab_rac)
{
    while (1) {
        //savoir si on veut l'ajouté ou la recherché
        int ajout; //1= ajout_de_lettre ; 0 = recherche
        printf("\n\n1.ajout d'un mot avec verification\n2.recherche \n3.genere un mot aleatoire\n");
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
            int type;
            printf("quelle est le type\n1.verbe\n2.Adv\n3.nom\n4.adjectif\n");
            scanf("%d",&type);
            char mot[30];
            printf("donner le mots de base\n");
            scanf("%s",mot);
            p_node_letter temp;
            temp=recherche_mot(mot,tab_rac[type-1]);
            if(temp==NULL)
            {
                temp= ajout_dun_mot(mot,tab_rac[type-1]);
                printf("votre mot existait pas\t");
            }
            else
            {
                printf("le mot existait deja\t");
            }
            printf("votre mot = %s\n",temp->mots_flechis->mot_de_base);
            //ajouter les caracteristique
        }
        while(ajout==2 && lettre[0]!='0')
        {
            printf("tape le mot a cherche\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                for(int i =0;i<4;i++)
                {
                    verif_mot = recherche_mot(lettre,tab_rac[i]);
                    if (verif_mot==NULL)
                    {
                        printf("le mot existe pas\n");
                    }
                    else
                    {
                        printf("le mot existe\t");
                        printf("%d\n",verif_mot->mots_flechis->nb_mot_flechis);
                    }
                }
            }
        }
        if(ajout==3)
        {
            int forme;
            printf("forme 1 ou 2\n");
            scanf("%d",&forme);
            if(forme==1)
            {
                p_node_letter* p_node_aleatoire=(p_node_letter*) malloc(4*(sizeof(p_node_letter)));
                p_node_aleatoire[0]=aleatoire_mot(tab_rac[2]);
                p_node_aleatoire[1]=aleatoire_mot(tab_rac[3]);
                p_node_aleatoire[2]=aleatoire_mot(tab_rac[0]);
                p_node_aleatoire[3]=aleatoire_mot(tab_rac[2]);
                for(int i=0;i<4;i++)
                {
                    printf("%s\t",p_node_aleatoire[i]->mots_flechis->mot_de_base);
                }
                int taille=4;
            }
            if(forme==2)
            {
                p_node_letter* p_node_aleatoire=(p_node_letter*) malloc(5*(sizeof(p_node_letter)));
                p_node_aleatoire[0]=aleatoire_mot(tab_rac[2]);
                p_node_aleatoire[1]=aleatoire_mot(tab_rac[3]);
                p_node_aleatoire[2]=aleatoire_mot(tab_rac[3]);
                p_node_aleatoire[3]=aleatoire_mot(tab_rac[2]);
                p_node_aleatoire[4]=aleatoire_mot(tab_rac[0]);
                for(int i=0;i<5;i++)
                {
                    printf("%s\t",p_node_aleatoire[i]->mots_flechis->mot_de_base);
                    if(i==1)
                    {
                        printf("qui\t");
                    }
                }
                int taille=5;
            }
        }
    }
}
