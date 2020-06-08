//
// Created by caspar.gauthier on 22/04/2020.
//

#include "map.h"
#include "ligne.h"
#include <deque>

Map::Map(int width, int height) {
    //std::cout << "ça marche !" << std::endl;
    for (int i = 0; i < height; i++){
        //std::cout << "ici aussi" << std::endl;
        //random type of lane
        int type = rand() % 4;
        if (last_line_type == Ligne::Type::VIDE) { //Pas possible d'avoir deux lignes vide à côté
            while (type == 0) {
                type = rand() % 4;
            }
        }
        else if (last_line_type == Ligne::Type::STATIQUE) { //Pas de camion à côté de lignes statiques
            while (type == 3) {
                    type = rand() % 4;
            }
        }
        else if (last_line_type == Ligne::Type::VOITURE) { //Pas de rivière à côté de voitures proba + de voiture
            if (type == 4) {
                type = 2;
            }
        }
        else if (last_line_type == Ligne::Type::CAMION) { //Pas de rivière ni de lignes vides à côté de camions
            while (type == 4 || type == 0) {
                type = rand() % 4;
            }
        }
        else if (last_line_type == Ligne::Type::RIVIERE) { //Pas de camions à côté d'une rivière et plus de chance d'avoir une nouvelle rivière
            if (type == 3) {
                type = 4;
            }
        }


        if (type == 0) {
            last_line_type = Ligne::Type::VIDE;
            std::cout << "" << std::endl;
            Ligne lane(Ligne::Type::VIDE, i); // ajoute une ligne vide
            lanes.push_front(lane);
        }
        else if (type == 1) {
            last_line_type = Ligne::Type::STATIQUE;
            std::cout << "" << std::endl;
            Ligne lane(Ligne::Type::STATIQUE, i); // ajoute une ligne statique
            lanes.push_front(lane);
        }
        else if (type == 2) {
            last_line_type = Ligne::Type::VOITURE;
            std::cout << "" << std::endl;
            Ligne lane(Ligne::Type::VOITURE, i); // ajoute une ligne de voiture
            lanes.push_front(lane);
        }
        else if (type == 3) {
            last_line_type = Ligne::Type::CAMION;
            std::cout << "" << std::endl;
            Ligne lane(Ligne::Type::CAMION, i); // ajoute une ligne de camion
            lanes.push_front(lane);
        }
        else if (type == 4) {
            last_line_type = Ligne::Type::RIVIERE;
            std::cout << "" << std::endl;
            Ligne lane(Ligne::Type::RIVIERE, i); // ajoute une ligne de rivière
            lanes.push_front(lane);
        }
    }
}

const std::deque<Ligne> &Map::getLanes() const {
    return lanes;
}

void Map::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    //std::deque<Ligne>::iterator It;
    for (int l = 0; l < lanes.size(); l++) {
        //Ligne actual = lanes[l];
        //if ((&lanes[l] == Ligne::Type::VIDE) {

        //}
    }
}
