//==============================================================================
// APPLICATION: 2019-11-27
// MODULE: circle.cpp
// PURPOSE:
// AUTHOR: Vy Huynh
//
// 27/11/2019 Created
//==============================================================================
#include "circle.h"

const double Circle::pi = 3.1415926;
//------------------------------------------------------------------------------
//	The constructor of the class.
//
//	input:	radius	The radius of a circle
//------------------------------------------------------------------------------
Circle::Circle(double radius)
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

