//
// Created by moraz on 12/11/2022.
//

#ifndef MAIN_C_VER_H
#define MAIN_C_VER_H
typedef struct node_ver_s {
    char* forme_flechie;
    int conjugaison;        //Infinitif (Inf) = 1 ; Indicatif présent (IPre) = 2 ; Imparfait de l'indicatif (IImp) = 3 ; Présent du subjonctif (SPre) = 4
    int personne;           //P1 = 1; P2 = 2; P3 = 3
    int pluriel;            //PL = 1; SG = 2; InvPL = 3; InvSG = 4
    struct node_ver_s * next;

}node_ver, *p_node_ver;

p_node_ver searchVer(int conjugaison, int pluriel, int personne, p_node_ver ver);      //retourne NULL si il n'existe pas

p_node_ver addVer(char* adding_word, p_node_ver spot, char* conjugaison, char* pluriel, char* personne);

#endif //MAIN_C_VER_H
