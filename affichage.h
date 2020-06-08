//
// Created by caspar.gauthier on 22/04/2020.
//

#ifndef PROJETC_AFFICHAGE_H
#define PROJETC_AFFICHAGE_H


class Affichage {
protected:
    int raw_num = 0;
    int col_num = 0;
public:
    Affichage(int rawNum, int colNum);
    void affiche_lignes();
};


#endif //PROJETC_AFFICHAGE_H
