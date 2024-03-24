#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include "World.h"

class Window
{
public:
	Window(int width, int height, std::string title) : window(sf::VideoMode(width, height), title)
	{

	}

	void pollEvents()
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}

	void draw(World &world)
	{
		for (Body* body : world.bodies)
		{
			if (body->type == Type::Circle)
			{
				circle.setFillColor(body->color);
				circle.setPosition(body->position);
				circle.setRotation(body->angle);
				circle.setRadius(body->scale);
				window.draw(circle);
			}
			else
			{
				square.setFillColor(body->color);
				square.setPosition(body->position);
				square.setRotation(body->angle);
				square.setScale({ body->scale, body->scale });
				window.draw(square);
			}
		}
	}

	bool isOpen()
	{
		return window.isOpen();
	}

	void clear()
	{
		window.clear();
	}

	void display()
	{
		window.display();
	}

private:
	sf::RenderWindow window;
	sf::CircleShape circle;
	sf::RectangleShape square;
};