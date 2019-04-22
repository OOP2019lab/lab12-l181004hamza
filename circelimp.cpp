#include"circle.h"
#include "shape.h"

circle :: circle(float r , string col): shape (col)
{
	radius=r;
	color=col;
}
float circle :: area ()
{
	float a;
	a=3.14*radius*radius;
	return a;
}