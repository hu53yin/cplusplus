#include "stdafx.h"
#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

int main5(int argc, _TCHAR* argv[])
{
	Complex c1(3, 2);
	Complex c2(3, 2);

	if(c1 == c2) {
		cout << "Equal" << endl;
	} else {
		cout << "Not equal" << endl;
	}

	if(c1 != c2) {
		cout << "Not equal" << endl;
	} else {
		cout << "Equal" << endl;
	}

	return 0;
}