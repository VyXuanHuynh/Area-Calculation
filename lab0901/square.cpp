#include <iostream>
#include "square.h"
using namespace std;
//-----------------------------------------------------------------------------
//	Class constructor
//
//	input:	side	The side of the square.
//-----------------------------------------------------------------------------
Square::Square(double side)
{
	this->side = side;
}
//-----------------------------------------------------------------------------
Square* Square::foo()
{
	cout << "I am function foo." << endl;
	return this;
}
//-----------------------------------------------------------------------------
Square* Square::goo()
{
	cout << "I am function goo." << endl;
	return this;
}
//-----------------------------------------------------------------------------
Square& Square::foo2()
{
	cout << "I am function foo2." << endl;
	return *this;
}
//-----------------------------------------------------------------------------
Square& Square::goo2()
{
	cout << "I am function goo2." << endl;
	return *this;
}
