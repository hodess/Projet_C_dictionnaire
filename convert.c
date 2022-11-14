//
// Created by moraz on 14/11/2022.
//

#include "convert.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convert(char* data){
    if(strcmp(data,"P1") == 0 || strcmp(data,"Inf") == 0 || strcmp(data,"Mas") == 0 || strcmp(data,"SG") == 0){
        return 1;
    }
    if(strcmp(data,"P2") == 0 || strcmp(data,"IPre") == 0 || strcmp(data,"Fem") == 0 || strcmp(data,"PL") == 0){
        return 2;
    }
    if(strcmp(data,"P3") == 0 || strcmp(data,"IImp") == 0 || strcmp(data,"InvGen") == 0 || strcmp(data,"InvPL") == 0){
        return 3;
    }
    if(strcmp(data,"SPre") == 0 || strcmp(data,"InvSG") == 0) {
        return 4;
    }
    else {
        return 5;
    }
}