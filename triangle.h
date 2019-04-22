#pragma once
#include"shape.h"

class triangle : public shape
{
private:
	float base;
	float height;
public:
	float area();
	triangle(float,float,string);
};