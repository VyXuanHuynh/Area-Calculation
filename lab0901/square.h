#pragma once

class Square{
	double	side;

public:
	Square(double side);

	double	area()	const { return side * side; }

	Square* foo();
	Square* goo();

	Square& foo2();
	Square& goo2();
};

