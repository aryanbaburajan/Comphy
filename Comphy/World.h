#pragma once

#include <vector>
#include "Body.h"

//#define G 9.8f
#define G 0.f

class World
{
public:
	std::vector<Body*> bodies;

	void addBody(Body* body)
	{
		bodies.push_back(body);
	}

	void update()
	{
		for (Body* body : bodies)
			body->position.y -= G;
	}
};