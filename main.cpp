//
// Created by caspar.gauthier on 04/05/2020.
//

#include <iostream>
#include <vector>
#include "perso.h"
#include "map.h"
#include "obstacle.h"
#include "logique.h"
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

        sf::RectangleShape ligne(sf::Vector2f(500, 40));
        ligne.setPosition(0, 40);
        ligne.setFillColor(sf::Color(20, 20, 255));
        window.draw(ligne);

        sf::Texture texture;
        if (!texture.loadFromFile("../../perso.png")){}
        sf::Sprite sprite;
        sprite.setTexture(texture);
        sprite.setPosition(100, 200);
        sprite.setScale(0.5, 0.5);
        window.draw(sprite);

        sf::Font font;
        if (!font.loadFromFile("../../arial.ttf")){
            std::cout << "Problème lors du chargement de la police" << std::endl;
        }
        sf::Text text;
        text.setFont(font);
        text.setString("Score : ");
        text.setPosition(20, 20);
        text.setFillColor(sf::Color(255, 20, 20));
        text.setCharacterSize(24);
        window.draw(text);

        window.draw(nouvelle_map);

        window.display();
    }

    std::cout << "The window is closed" << std::endl;

    return 0;
}