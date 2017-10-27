#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main16(int argc, _TCHAR* argv[])
{
	int cats = 5;

	[cats]() mutable {
		cats = 8;
		cout << cats << endl;
	}();

	cout << cats << endl;

	return 0;
}