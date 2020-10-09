//=============================================================================
//	APPLICATION:	lab0902
//	MODULE:			main
//	PURPOSE:
//	AUTHOR(S):		Vy Huynh
//
//	11/27/2019 5:35:07 PM	Created.
//=============================================================================
#include <iostream>
#include "circle.h"
using namespace std;
//-----------------------------------------------------------------------------
//	THE MAIN ENTRY POINT TO THE PROGRAM.
//
//	input:	argc	The number of arguments of the programme.
//			argv	The vector of arguments of the programme.
//	return:	The code of the reason the process was terminated for.
//			The value defaults to zero.
//-----------------------------------------------------------------------------
int main(int argc, char* argv[])
{
	Circle	c1(2.50);
	Circle	c2(2.75);

	cout << "area(c1) = " << c1.area() << endl;
	cout << "area(c2) = " << c2.area() << endl;
	cout << "size(c1) = " << sizeof(c1) << endl;
	cout << "size(c2) = " << sizeof(c2) << endl;

	return 0;
}
