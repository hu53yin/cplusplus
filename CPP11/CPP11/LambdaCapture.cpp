#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main13(int argc, _TCHAR* argv[])
{
	int one = 1;
	int two = 2;
	int three = 3;

	// -> What the fun :) 
	//[](){}();

	//Capture one and two by value
	[one, two]() { cout << one << ", " << two << endl; }();

	//Capture all variables by value
	[=]() { cout << one << ", " << two << endl; }();

	//Default capture all variables by value, but capture three by reference
	[=, &three]() { three = 7; cout << one << ", " << two << endl; }();

	cout << three << endl;

	//Default capture all variables by reference
	[&]() { three = 7; two = 8; cout << one << ", " << two << endl; }();

	cout << two << endl;

	//Default capture all variables by reference, but two and three by value
	[&, two, three]() { one = 100; cout << one << ", " << two << endl; }();

	cout << two << endl;

	return 0;
}