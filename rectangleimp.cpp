#include"rectangle.h"
#include "shape.h"

rectangle :: rectangle (float l,float w,string col): shape (col)
{
	length=l;
	width=w;
	color=col;
}

float rectangle :: area ()
{
	float a;
	a=length*width;
	return a;

}