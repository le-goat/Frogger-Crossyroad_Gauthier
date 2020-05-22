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
    std::deque<bool> lane;

public:
    Ligne(int type);
};



#endif //PROJETC_LIGNE_H
