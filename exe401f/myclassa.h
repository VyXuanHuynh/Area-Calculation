#if !defined(_MYCLASSA_H)
#define _MYCLASSA_H
//==============================================================================
// APPLICATION: 2019-11-27
// MODULE: myclassa.h
// PURPOSE:
// AUTHOR: Vy Huynh
//
// 27/11/2019 Created
//==============================================================================

class MyClassA	{
private:
	static int	objCounter;
	const int	sn;

public:
	static int counter();
	static int foo(MyClassA* p);

	MyClassA();

	int seriaNumber() const { return sn; }
};

#endif  //_MYCLASSA_H
