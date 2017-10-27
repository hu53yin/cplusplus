#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Test {
private:
	int one;
	int two;

public:
	void run() {
		one = 1;
		two = 2;
		int three = 3;
		int four = 4;

		// -> X you can't use by value reference
		//auto pLambda = [=, this, three, four](){ 
		auto pLambda = [&, this, three, four](){ 
			one = 111;
			cout <<  one << endl;
			cout <<  two << endl;
			cout <<  three << endl;
			cout <<  four << endl;
		};
		pLambda();
	}
};

int main14(int argc, _TCHAR* argv[])
{
	Test test;
	test.run();

	return 0;
}