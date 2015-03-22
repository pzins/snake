#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>

#include <vector>

#include <string>
 
#include "game.h"

#define WIDTH_SCREEN 640
#define HEIGTH_SCREEN 640




void drawMap(Game* game, std::vector<std::vector<int> > screen);

int main()
{
    Game* game = new Game(WIDTH_SCREEN, HEIGTH_SCREEN);
    sf::Clock time;
    while (game->app.isOpen())
    {
        sf::Event event;
        while (game->app.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                game->app.close();
            if (event.type == sf::Event::KeyPressed)
            {
                /*
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                {
                    if (game->getDirection() != 3)
                        game->setDirection(1);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                {
                    if (game->getDirection() != 1)
                        game->setDirection(3);

                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    if (game->getDirection() != 0)
                        game->setDirection(2);

                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {                    
                    if (game->getDirection() != 2)
                        game->setDirection(0);
                }  */ 
            }
        }
        //if (time.getElapsedTime().asMilliseconds() >= 0.5)
     //   {
            game->ia();
            time.restart();
    
            if (!game->getState()) game->run();
            else if (game->getState() == 1) 
                game->gameOver();
            else game->win();

      //  }
        
        game->drawMap();
        game->app.display();
        game->app.clear();
    }

    return 0;
}



