//
// Created by caspar.gauthier on 11/05/2020.
//

#ifndef PROJETC_LIGNE_H
#define PROJETC_LIGNE_H
#include <deque>
#include "obstacle.h"

class Ligne {
protected:
    int type;
    int x;
    std::deque<Obstacle> lane;

public:
//    Ligne(int type);
    Ligne(Type type, int x);

    enum Type {
        VIDE,
        STATIQUE,
        VOITURE,
        CAMION,
        RIVIERE
    };
};



#endif //PROJETC_LIGNE_H
