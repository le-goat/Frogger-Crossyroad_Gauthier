//
// Created by caspar.gauthier on 22/04/2020.
//

#include "map.h"
#include "ligne.h"
#include <deque>

Map::Map(int width, int height) {
    for (int i = 0; i < height; i++){
        //random type of lane
//        int type = rand() % 4;
        Map lane(Ligne::Type::VIDE, width);
//        lanes.insert(i, lane);
//        lanes.push_front(lane);
    }
}
