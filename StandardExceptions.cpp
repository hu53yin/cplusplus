#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[99];
		delete [] pMemory;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	try {
		CanGoWrong wrong;
	}
	catch(bad_alloc &e) {
		cout << "Cought exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}