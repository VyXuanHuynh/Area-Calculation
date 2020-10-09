#if !defined(_CIRCLE_H)
#define _CIRCLE_H
//==============================================================================
// APPLICATION: 2019-11-27
// MODULE: circle.h
// PURPOSE:
// AUTHOR: Dr Grzegorz Szewczyk
//
// 27/11/2019 Created
//==============================================================================

class Circle	{
private:
	const double pi;
	double radius;

public:
	Circle(double radius);
	double area();
};

#endif  //_CIRCLE_H
