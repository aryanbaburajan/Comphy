#include "Window.h"
#include "World.h"
#include "Body.h"

int main()
{
    Window window(960, 540, "Comphy");

    World world;
    Body bob = Body({ 50.f, 50.f }, 0.f, 50.f, Type::Circle, sf::Color::Green);
    Body dan = Body({ 150.f, 150.f }, 0.f, 50.f, Type::Square, sf::Color::Red);
    //world.addBody(&bob);
    world.addBody(&dan);

    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        window.pollEvents();
        world.update();

        window.clear();
        window.draw(world);
        window.display();
    }

    return 0;
}