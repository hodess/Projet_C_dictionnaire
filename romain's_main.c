//
// Created by romai on 27/10/2022.
//

#include "romain's_main.h"

void start()
{
    t_rac_letter rac=creation_de_larbre();
    rac = creation_de_larbre();

    //tapé la lettre que l'on veut ajouté
    char lettre;
    printf("tapé la lettre\n");
    scanf("%c",lettre);

    //savoir si on veut l'ajouté ou la recherché
    int ajout; //1= ajout ; 0 = recherche
    printf("ajouté ou recherche\n");
    scanf("%d",&ajout);
    int num=gestion_de_larbre(lettre,ajout,&rac);




    //affichage
    printf("num = %d , ajout = %d",num,ajout);

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
    }

}
