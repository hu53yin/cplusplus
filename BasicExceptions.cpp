// BasicExceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void mightGoWrong() {
	bool error1 = false;
	bool error2= true;

	if(error1) {
		throw "Something went wrong.";
	}

	if(error2) {
		throw string("Something else went wrong");
	}
}

void usesMightGoWrong() {
	mightGroWrong();
}

int _tmain(int argc, _TCHAR* argv[])
{
	try {
		usesMightGoWrong();
	}
	catch(int e) {
		cout << "Error code: " << e << endl;
	}
	catch (char const *e) {
		cout << "Error message: " << e << endl;
	}
	catch(string &e) {
		cout << "String error message: " << e << endl;
	}

	cout << "Still running" << endl;

	return 0;
}

