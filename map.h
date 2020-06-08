//
// Created by caspar.gauthier on 22/04/2020.
//

#ifndef PROJETC_MAP_H
#define PROJETC_MAP_H
#include <deque>
#include "ligne.h"


class Map {
protected:
    int width;
    int height;
    std::deque<Ligne> lanes;
    int last_line_type = 0;

public:
    Map(int width, int height);
};


#endif //PROJETC_MAP_H
