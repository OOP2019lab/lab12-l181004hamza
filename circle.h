#pragma once
#include"shape.h"

class circle : public shape
{
private:
	float radius;
public:
	float area();
	circle(float r, string col);
};
