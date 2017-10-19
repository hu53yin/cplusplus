// TemplateFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//template<typename T>
template<class T>
void print(T n) {
	cout << n << endl;
}


int main2(int argc, _TCHAR* argv[])
{
	print<string>("Hello");
	print<int>(5);

	print("Hi there");
	return 0;
}

