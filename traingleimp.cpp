#include "triangle.h"
#include "shape.h"


triangle ::  triangle (float b,float h,string col): shape (col)
{
	base=b;
	height=h;
	color=col;
}

float triangle :: area ()
{
	float a;
	a=0.5*base*height;
	return a;
}