//
// Created by caspar.gauthier on 22/04/2020.
//

#ifndef PROJETC_PERSO_H
#define PROJETC_PERSO_H


class Perso {
public:
    int x, y;  //Les variables qui définissent la position du personnage

    //Initialisation de la position de notre personnage
    Perso(int width) {
        x = width / 2;
        y = 0;
    }
};


#endif //PROJETC_PERSO_H
