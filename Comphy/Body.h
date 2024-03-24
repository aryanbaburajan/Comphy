#pragma once

#include "Vector2.h"

enum class Type
{
	Circle,
	Square
};

class Body
{
public:
	Type type;
	Vector2 position;
	float angle;
	float scale;
	sf::Color color;

	Body(Vector2 pos, float ang, float scl, Type typ, sf::Color col) 
		: position(pos), angle(ang), scale(scl), type(typ), color(col) {}
};