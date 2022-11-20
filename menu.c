//
// Created by Gigi on 27/10/2022.
//

#include "menu.h"

void lecutre_fichier_et_creation_de_larbre()
{
    srand(time(NULL));
    FILE* text;
    text = fopen("dictionnaire_non_accentue.txt","r");
    p_node_letter* tab_rac;
    tab_rac=lecture_fichier(text);
    menu(tab_rac);
}





void menu(p_node_letter* tab_rac)
{
    while (1) {
        //savoir si on veut l'ajouté ou la recherché
        int ajout; //1= ajout_de_lettre ; 0 = recherche
        printf("\n1.genere une phrase aleatoire\n2.recherche \n0.quitter\n");
        scanf("%d", &ajout);
        if (ajout == 0) {
            break;
        }
        printf("");


        //tapé la lettre que l'on veut ajouté

        p_node_letter verif_mot;
        char lettre[30];
        if(ajout==2)
        {
            printf("tape le mot de base a chercher\n");
            scanf(" %s", lettre);
            if (lettre[0]!='0')
            {
                for(int i =0;i<4;i++)
                {
                    verif_mot = recherche_mot(lettre,tab_rac[i]);
                    if(i==0)
                    {
                        printf("pour les verbe ");
                    }
                    if(i==1)
                    {
                        printf("pour les adjectif ");
                    }
                    if(i==2)
                    {
                        printf("pour les nom ");
                    }
                    if(i==3)
                    {
                        printf("pour les adverbe ");
                    }
                    if (verif_mot==NULL)
                    {
                        printf("le mot existe pas\n");
                    }
                    else
                    {
                        printf("le mot existe avec ");
                        printf("%d mot flechis\n",verif_mot->mots_flechis->nb_mot_flechis);
                    }
                }
            }
        }
        if(ajout==1)
        {
            //0 : verbe ; 1 : adverbe ; 2 : nom ; 3 : adjectif
            int forme;
            printf("forme 1, 2 ou 3\n");
            scanf("%d",&forme);
            // nom adj verb nom
            if(forme==1)
            {
                int taille=4;
                p_node_letter* p_node_aleatoire=(p_node_letter*) malloc(taille * (sizeof(p_node_letter)));
                p_node_aleatoire[0]= aleatoire_mot_nom(tab_rac[2]);
                p_node_aleatoire[1]= aleatoire_mot_nom(tab_rac[3]);
                p_node_aleatoire[2]= aleatoire_mot_nom(tab_rac[0]);
                p_node_aleatoire[3]= aleatoire_mot_nom(tab_rac[2]);
                for(int i=0;i<taille;i++)
                {
                    printf("%s\t",p_node_aleatoire[i]->mots_flechis->mot_de_base);
                }
                printf("\n");
                affichage_phrase_avec_flechis(p_node_aleatoire,forme);
            }
            // nom qui verbe verb nom adj
            if(forme==2)
            {
                int taille=5;
                p_node_letter* p_node_aleatoire=(p_node_letter*) malloc(taille * (sizeof(p_node_letter)));
                p_node_aleatoire[0]= aleatoire_mot_nom(tab_rac[2]);
                p_node_aleatoire[1]= aleatoire_mot_nom(tab_rac[0]);
                p_node_aleatoire[2]= aleatoire_mot_nom(tab_rac[0]);
                p_node_aleatoire[3]= aleatoire_mot_nom(tab_rac[2]);
                p_node_aleatoire[4]= aleatoire_mot_nom(tab_rac[3]);
                for(int i=0;i<taille;i++)
                {
                    printf("%s\t",p_node_aleatoire[i]->mots_flechis->mot_de_base);
                    if(i==0)
                    {
                        printf("qui\t");
                    }
                }
                printf("\n");
                affichage_phrase_avec_flechis(p_node_aleatoire,forme);
            }
            //nom adj qui verbe adverbe
            if(forme==3)
            {
                int taille=4;
                p_node_letter* p_node_aleatoire=(p_node_letter*) malloc(taille * (sizeof(p_node_letter)));
                p_node_aleatoire[0]= aleatoire_mot_nom(tab_rac[2]);
                p_node_aleatoire[1]= aleatoire_mot_nom(tab_rac[3]);
                p_node_aleatoire[2]= aleatoire_mot_nom(tab_rac[0]);
                p_node_aleatoire[3]= aleatoire_mot_nom(tab_rac[1]);
                for(int i=0;i<taille;i++)
                {
                    printf("%s\t",p_node_aleatoire[i]->mots_flechis->mot_de_base);
                    if(i==1)
                    {
                        printf("qui\t");
                    }
                }
                printf("\n");
                affichage_phrase_avec_flechis(p_node_aleatoire,forme);
            }
        }
    }
}


