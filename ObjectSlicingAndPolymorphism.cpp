// FunctionPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Parent {
private:
	int one;
public:
	Parent() : one(0) {
	}

	Parent(const Parent &other) : one(0) {
		cout << "copy parent" << endl;
	}

	virtual void print() {
		cout << "parent" << endl;
	}

	virtual ~Parent() {
	}
};

class Child : public Parent {
private:
	int two;

public:
	Child(): two(0) {
	}

	void print() {
		cout << "child" << endl;
	}
};

int main3(int argc, _TCHAR* argv[])
{
	Child c1;
	Parent &p1 = c1;

	p1.print();

	Parent p2 = Child();
	p2.print();

	return 0;
}

