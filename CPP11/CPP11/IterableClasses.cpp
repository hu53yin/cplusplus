#include "stdafx.h"
#include <iostream>
#include <string>
#include "ring.h"

using namespace std;

int main6(int argc, _TCHAR* argv[])
{
	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");

	// C++ 98 style
	for(ring<string>::iterator it = textring.begin(); it != textring.end(); it++) {
		cout << *it << endl;
	}

	cout << endl;

	// C++ 11 style
	for(auto value: textring) {
		cout << value << endl;
	}

	return 0;
}

