#pragma once
#include<iostream>
#include<string>
using namespace std;

class shape
{
protected:
	string type;
public:
	shape(string col);
	virtual float area();
	string color;

};