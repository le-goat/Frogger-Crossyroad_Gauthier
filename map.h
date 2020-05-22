//
// Created by caspar.gauthier on 22/04/2020.
//

#ifndef PROJETC_MAP_H
#define PROJETC_MAP_H
#include <deque>


class Map {
protected:
    int width;
    int height;
    std::deque<int> lanes;

public:
    Map(int width, int height);
};


#endif //PROJETC_MAP_H
