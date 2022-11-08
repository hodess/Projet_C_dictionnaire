cmake_minimum_required(VERSION 3.22)
project(Projet_C_dictionnaire C)

set(CMAKE_C_STANDARD 99)

add_executable(Projet_C_dictionnaire main.c functions/nom.c headers/nom.h functions/adj.c headers/adj.h functions/adv.c headers/adv.h functions/ver.c headers/ver.h)
