//
// Created by moraz on 08/11/2022.
//

#ifndef MAIN_C_ADV_H
#define MAIN_C_ADV_H

typedef struct node_adv_s {
    char forme_flechie[40];
    struct node_adv_s * next;

}node_adv, *p_node_adv;

p_node_adv searchAdv(char word, p_node_adv adv);      //retourne NULL si il n'existe pas

void addAdv(char adding_word[40], p_node_adv spot);

#endif //MAIN_C_ADV_H
