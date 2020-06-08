//
// Created by caspar.gauthier on 22/04/2020.
//

#include "map.h"
#include "ligne.h"
#include <deque>

Map::Map(int width, int height) {
    std::cout << "ça marche !" << std::endl;
    for (int i = 0; i < height; i++){
        std::cout << "ici aussi" << std::endl;
        //random type of lane
        int type = rand() % 4;
        if (type == 0) {
            Ligne lane(Ligne::Type::VIDE, i);
            lanes.push_front(lane);
        }
        if (type == 1) {
            Ligne lane(Ligne::Type::STATIQUE, i);
            lanes.push_front(lane);
        }
        if (type == 2) {
            Ligne lane(Ligne::Type::VOITURE, i);
            lanes.push_front(lane);
        }
        if (type == 3) {
            Ligne lane(Ligne::Type::CAMION, i);
            lanes.push_front(lane);
        }
        if (type == 4) {
            Ligne lane(Ligne::Type::RIVIERE, i);
            lanes.push_front(lane);
        }
    }
}
