//=============================================================================
//	APPLICATION:	lab0901
//	MODULE:			main
//	PURPOSE:
//	AUTHOR(S):		Vy Huynh
//
//	11/27/2019 5:04:17 PM	Created.
//=============================================================================
#include <iostream>
#include "square.h"
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
	Square	sq1(5.0);
	Square	sq2(4.0);

	cout << "The are is " << sq1.area() << endl << endl;

	cout << sq1.foo()->goo()->area() << endl << endl;
	cout << sq1.foo2().goo2().area() << endl;

	cout << sq2.foo()->goo()->area() << endl << endl;
	cout << sq2.foo2().goo2().area() << endl;

	return 0;
}
