// Decltype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main1(int argc, _TCHAR* argv[])
{
	//int double
	string value;

	decltype(value) name = "Bob";

	cout << typeid(value).name() << endl;

	cout << name << endl;

	return 0;
}

