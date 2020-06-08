//
// Created by caspar.gauthier on 04/05/2020.
//

#include <iostream>
#include <vector>
#include "perso.h"
#include "map.h"
#include "obstacle.h"
#include "affichage.h"
#include "SFML/Graphics.hpp"

int main() {

//    std::cout << Map << std::endl;

    const int height = 20;
    const int width = 10;
    const int WIDTH = 500;
    const int HEIGHT = 800;
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Chemin tortueux");
    window.setVerticalSyncEnabled(true);

    Map nouvelle_map(width, height);


    while(window.isOpen()) {
//        for (int l = 0; l < height; l++) {
//            Map::getLanes()
//            //Map::getLanes()
//        }

        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::Right) {
                    //Fonction perso associée
                    std::cout << "La droite" << std::endl;
                }
                if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::Left) {
                    //Fonction perso associée
                    std::cout << "La gauche" << std::endl;
                }
                if (event.key.code == sf::Keyboard::S || event.key.code == sf::Keyboard::Down) {
                    //Fonction perso associée
                    std::cout << "Le bas" << std::endl;
                }
                if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::Up || event.key.code == sf::Keyboard::Space) {
                    //Fonction perso associée
                    std::cout << "Le haut" << std::endl;
                }
            }
        }


        window.draw(nouvelle_map);
    }

    std::cout << "The window is closed" << std::endl;

    return 0;
}