#include <SFML/Graphics.hpp>
#include "CollisionHandler.h"
#include "physical_entities/Circle.h"


int main() {

    sf::RenderWindow window(sf::VideoMode({800, 600}), "My window");

    while (window.isOpen()) {

        while (const std::optional event = window.pollEvent()) {

            if (event->is<sf::Event::Closed>())
                window.close();
        }


        window.clear(sf::Color::Black);

        window.display();
    }
}