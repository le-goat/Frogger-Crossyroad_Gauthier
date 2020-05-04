//
// Created by caspar.gauthier on 04/05/2020.
//

#include <iostream>
#include <vector>
#include "perso.h"
#include "map.h"
#include "fonctionnement.h"
#include "SFML/Graphics.hpp"

int main() {

    const int WIDTH = 500;
    const int HEIGHT = 800;
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Chemin tortueux");
    window.setVerticalSyncEnabled(true);


    while(window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }
    std::cout << "The window is closed" << std::endl;

    return 0;
}