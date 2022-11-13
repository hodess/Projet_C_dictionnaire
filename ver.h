//
// Created by moraz on 12/11/2022.
//

#ifndef MAIN_C_VER_H
#define MAIN_C_VER_H
typedef struct node_ver_s {
    char forme_flechie[40];
    int conjugaison;        //Infinitif () = 1
                            //Indicatif présent (IPre) = 2
                            //Imparfait de l'indicatif (IImp) = 3
                            //Présent du subjonctif (SPre) = 4
    int genre;              //Mas = 1; Fem = 2; InvGen = 3
    int pluriel;            //PL = 1; SG = 2; InvPL = 3; InvSG = 4
    struct node_ver_s * next;

}node_ver, *p_node_ver;

p_node_ver searchVer(int conjugaison, int genre, int pluriel, p_node_ver ver);      //retourne NULL si il n'existe pas

void addVer(char adding_word[40], p_node_ver spot, int conjugaison, int genre, int pluriel);

#endif //MAIN_C_VER_H
