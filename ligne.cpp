//
// Created by caspar.gauthier on 11/05/2020.
//


#include "ligne.h"
#include <deque>
#include "obstacle.h"

Ligne::Ligne(Type type, int y) {

    //créer un tableau d'obstacles
    switch (type) {
        case VIDE:
            break;
        case STATIQUE: {
            this->speed = 0;
            Obstacle arbre(Obstacle(1, 0, y));
            //le remplit avec des obstacles statiques
            //..
        }break;
        case VOITURE: {
            this->speed = 2;
            Obstacle voiture(Obstacle(2, 0, y));
        }break;
        case CAMION: {
            this->speed = 1;
            Obstacle camion(Obstacle(3, 0, y));
        }break;
        case RIVIERE:{
            int randspeed = 0;
            int randwidth = 0;
            this->speed = randspeed;
            Obstacle eau(Obstacle(randwidth, 0, y));
        }break;
    }
//    if (int type = 0) { // 0 est équivalent à une ligne sans obstacles
//        Obstacle ob{0, 0};
//
//    }if (int type = 1) { // 1 est équivalent à une ligne avec des obstacles statiques
//        Obstacle ob{1, 0};
//
//    }if (int type = 2) { // 2 est équivalent à une ligne avec des obstacles en mouvement de type voiture
//        Obstacle ob{2, 2};
//
//    }if (int type = 3) { // 3 est équivalent à une ligne avec des obstacles en mouvement de type camion
//        Obstacle ob{3, 1};
//
//    }if (int type = 4) { // 4 est équivalent à une ligne de type rivière (obstaces = eau)
//        //définir une valeur random pour la largeur et la vitesse des obstacles
//        Obstacle ob{0, 0};
//
//    }
    //lane.push_front() //

}
