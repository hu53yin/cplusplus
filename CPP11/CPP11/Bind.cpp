#include "stdafx.h"
#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test {
public:
	int add(int a, int b, int c) {
		cout << a << ", " << b << ", " << c << endl;
		return a + b + c;
	}
};

int run(function<int(int, int)> func, int a, int b) {
	return func(a, b);
}

int main29() {

	Test test;

	auto calculate = bind(&Test::add, test, _2, 100, _1);

	cout << run(calculate, 7, 3) << endl;

	return 0;
}