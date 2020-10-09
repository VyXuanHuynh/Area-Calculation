//==============================================================================
// APPLICATION: 2019-11-27
// MODULE: myclassa.cpp
// PURPOSE:
// AUTHOR: Vy Huynh
//
// 27/11/2019 Created
//==============================================================================
#include "myclassa.h"
//--------------------------------------------------OBJECTS OF TO THE CLASSIFIER
int MyClassA::objCounter = 0;
//------------------------------------------------------------------------------
//	The constructor of the class.
//
//	input:
//------------------------------------------------------------------------------
MyClassA::MyClassA() : sn(++objCounter)
{}
//------------------------------------------------------------------------------
int MyClassA::counter()
{
	return objCounter;
}

int MyClassA::foo(MyClassA* p)
{
	return objCounter * p->sn;
}
