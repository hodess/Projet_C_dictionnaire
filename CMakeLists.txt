cmake_minimum_required(VERSION 3.22)
project(Projet_C_dictionnaire C)

set(CMAKE_C_STANDARD 99)

add_executable(Projet_C_dictionnaire main.c gigi's_main.c gigi's_main.h gestion_txt/functions/couper.c gestion_txt/header/couper.h gestion_txt/functions/lecture.c gestion_txt/header/lecture.h genere_phrase/functions/aleatoire.c genere_phrase/header/aleatoire.h gestion_des_node/functions/liste_lettre.c gestion_des_node/header/liste_lettre.h gestion_des_node/functions/node_letter.c gestion_des_node/header/node_letter.h romain's_main.c romain's_main.h gestion_mot_flechis/functions/adj.c gestion_mot_flechis/header/adj.h gestion_mot_flechis/functions/adv.c gestion_mot_flechis/header/adv.h gestion_mot_flechis/functions/nom.c gestion_mot_flechis/header/nom.h gestion_mot_flechis/functions/ver.c gestion_mot_flechis/header/ver.h genere_phrase/functions/convert.c genere_phrase/header/convert.h)
