#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void test(void (*pFunc)()) {
	pFunc();
}

int main11(int argc, _TCHAR* argv[])
{
	auto  func = [](){ cout << "Hello" << endl; };

	func();

	test(func);

	test([](){ cout << "Hello again" << endl; });

	//[](){ cout << "Hello" << endl; }();

	return 0;
}

