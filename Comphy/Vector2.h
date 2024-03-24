#pragma once

#include <SFML/Graphics.hpp>

struct Vector2
{
	float x, y;

	operator sf::Vector2f() const
	{
		return { x, y };
	}
};