//
// Created by Nolan on 27/10/2022.
//

#ifndef MAIN_C_NOLAN_H
#define MAIN_C_NOLAN_H


void add(char genre, char pluriel);

p_node_nom searchNom(char word, p_node_nom nom);      //retourne NULL si il n'existe pas

p_node_adj searchAdj(char word, p_node_adj adj);

p_node_adv searchAdv(char word, p_node_adv adv);

typedef struct node_nom_s {
    char forme_flechie[40];
    char genre[6];              //Mas Fem InvGen
    char pluriel[5];            //PL SG InvPL InvSG
    struct node_nom_s * next;

}node_nom, *p_node_nom;

typedef struct node_verbe_s {
    char forme_de_base[40];
    char forme_flechie[40];
    
}node_verbe, *p_node_verbe;

typedef struct node_adj_s {
    char forme_flechie[40];
    char genre[6];              //Mas Fem InvGen
    char pluriel[5];            //PL SG InvPL InvSG
    struct node_nom_s * next;

}node_adj, *p_node_adj;

typedef struct node_adv_s {
    char forme_flechie[40];
    struct node_nom_s * next;

}node_adv, *p_node_adv;

#endif //MAIN_C_NOLAN_H
