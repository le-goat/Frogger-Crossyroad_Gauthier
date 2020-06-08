//
// Created by caspar.gauthier on 22/04/2020.
//

#ifndef PROJETC_MAP_H
#define PROJETC_MAP_H
#include <deque>
#include "ligne.h"
#include <SFML/Graphics.hpp>

class Map: public sf::Drawable  {
protected:
    int width;
    int height;
    std::deque<Ligne> lanes;

public:
    [[nodiscard]] const std::deque<Ligne> &getLanes() const;

protected:
    int last_line_type = 0;

public:
    Map(int width, int height);

protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //PROJETC_MAP_H