// FunctionPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void test(int value) {
	cout << "Hello" << value << endl;
}

int main1(int argc, _TCHAR* argv[])
{
	test(7);

	void (*pTest)(int);

	pTest = test;

	pTest(8);

	return 0;
}

