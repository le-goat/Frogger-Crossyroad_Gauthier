//
// Created by caspar.gauthier on 11/05/2020.
//


#include "ligne.h"
#include <deque>
#include "obstacle.h"

Ligne::Ligne(Type type, int y) {

    //créer un tableau d'obstacles
    switch (type) {
        case VIDE: // Si le type de la ligne est "VIDE", on ne mets pas d'obstacle
            break;
        case STATIQUE: { // On posiitionne aléatoirement des obstacles statiques
            this->speed = 0;
            int randx = 0;
            for (int i = 0; i < 5; ++i) {
                randx = rand() % 9;
                std::cout << randx;
                Obstacle arbre(Obstacle(1, randx, y));
            }
        }break;
        case VOITURE: { // On positionne aléatoirement des obstacles qui bougent rapidement
            this->speed = 2;
            int randx = 0;
            for (int i = 0; i < 3; ++i) {
                randx = rand() % 9;
                std::cout << randx;
                Obstacle voiture(Obstacle(2, randx, y));
            }
        }break;
        case CAMION: { // On positionne aléatoirement des obstacles qui bougent peu rapidement
            this->speed = 1;
            int randx = 0;
            for (int i = 0; i < 2; ++i) {
                randx = rand() % 9;
                std::cout << randx;
                Obstacle camion(Obstacle(3, randx, y));
            }
        }break;
        case RIVIERE:{ // On positionne aléatoirement des obstacles qui bougent plus ou moins rapidement
            int randspeed = 0;
            int randwidth = 0;
            this->speed = randspeed;
            int randx = 0;
            for (int i = 0; i < 5; ++i) {
                randx = rand() % 9;
                std::cout << randx;
                randwidth = rand() % 2;
                Obstacle eau(Obstacle(randwidth, randx, y));
            }
        }break;
    }
}
