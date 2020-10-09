//==============================================================================
// APPLICATION: 2019-11-27
// MODULE: circle.cpp
// AUTHOR: Vy Huynh
//==============================================================================
#include "circle.h"
//------------------------------------------------------------------------------
//	The constructor of the class.
//
//	input:	radius	The radius of a circle
//------------------------------------------------------------------------------
Circle::Circle(double radius) : pi(3.1415926)
{
	this->radius = radius;
}
//------------------------------------------------------------------------------
//	The function computes the area of the circle.
//
//	input:
//	output:
//	return:	The are of the circle.
//------------------------------------------------------------------------------
double Circle::area()
{
	return pi * radius * radius;
}

