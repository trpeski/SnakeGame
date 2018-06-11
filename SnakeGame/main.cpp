#include <iostream>
#include <SFML/Graphics.hpp>
#include "Window.h"
#include <string>

using namespace std;

int main()
{
    Window win;
    win.Setwin(500,500);
    while (win.window.isOpen())
    {
        win.window.display();
        sf::Event event;
        while (win.window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){win.window.close();}


    }
    win.window.display();
    }

    return 0;
}
