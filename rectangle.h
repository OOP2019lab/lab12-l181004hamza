#pragma once
#include"shape.h"

class rectangle : public shape
{
private:
	float length;
	float width;
public:
	float area();
	rectangle(float,float,string);
};