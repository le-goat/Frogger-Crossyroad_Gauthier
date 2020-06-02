//
// Created by caspar.gauthier on 11/05/2020.
//

#ifndef PROJETC_OBSTACLE_H
#define PROJETC_OBSTACLE_H

#include <iostream>


class Obstacle {
protected:
    int width;
    int x;
    int y;

public:
    Obstacle(int width, int x, int y);
};


#endif //PROJETC_OBSTACLE_H
