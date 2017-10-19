// TemplateFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

//template<typename T>
template<class T>
void print(T n) {
	cout << "Template version: " << n << endl;
}

void print(int value) {
	cout << "Non-template version:" << value << endl;
}

template<class T>
void show() {
	cout << T() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	print(5);
	print<>(6);

	show<double>();
	return 0;
}

