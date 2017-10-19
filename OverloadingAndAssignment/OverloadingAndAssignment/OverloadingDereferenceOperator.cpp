#include "stdafx.h"
#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Complex c1(2, 4);
	
	cout << *c1 + *Complex(4, 3) << endl;
	
	return 0;
}