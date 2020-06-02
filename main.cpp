//
// Created by caspar.gauthier on 04/05/2020.
//

#include <iostream>
#include <vector>
#include "perso.h"
#include "map.h"
#include "obstacle.h"
#include "fonctionnement.h"
#include "SFML/Graphics.hpp"

int main() {

//    std::cout << Map << std::endl;

    const int WIDTH = 500;
    const int HEIGHT = 800;
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Chemin tortueux");
    window.setVerticalSyncEnabled(true);


    while(window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::Right) {
                    //Fonction perso associée
                }
                if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::Left) {
                    //Fonction perso associée
                }
                if (event.key.code == sf::Keyboard::S || event.key.code == sf::Keyboard::Down) {
                    //Fonction perso associée
                }
                if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::Up) {
                    //Fonction perso associée
                }
            }
        }
    }
    std::cout << "The window is closed" << std::endl;

    return 0;
}