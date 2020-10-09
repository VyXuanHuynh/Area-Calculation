//=============================================================================
//	APPLICATION:	exe401f
//	MODULE:			main
//	PURPOSE:
//	AUTHOR(S):		Vy Huynh
//
//	11/27/2019 6:18:39 PM	Created.
//=============================================================================
#include <iostream>
#include "myclassa.h"
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
	MyClassA	a1;
	MyClassA	a2;
	MyClassA	a3;
	MyClassA	a4;
	MyClassA	a5;
	MyClassA* p1;

	cout << "counter(2) = " << MyClassA::counter() << endl;
	cout << "S/N(a1):     " << a1.seriaNumber() << endl;
	cout << "S/N(a2):     " << a2.seriaNumber() << endl;
	cout << "S/N(a3):     " << a3.seriaNumber() << endl;
	cout << "S/N(a4):     " << a4.seriaNumber() << endl;
	cout << "S/N(a5):     " << a5.seriaNumber() << endl;
	p1 = new MyClassA();
	cout << "S/N(p1):     " << p1->seriaNumber() << endl;
	cout << "counter(2) = " << MyClassA::counter() << endl;
	cout << endl;

	cout << a1.counter() << endl;
	cout << MyClassA::foo(&a5) << endl;
	cout << p1->foo(p1) << endl;

	return 0;
}
