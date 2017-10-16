#include "stdafx.h"
#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;

class Test {
	string name;

public:
	Test(string name) : name(name) {
	}

	~Test() {
		//cout << "Object destroyed" << endl;
	}

	void print() const {
		cout << name << endl;
	}
};

int _main10(int argc, _TCHAR* argv[]) {
	//LIFO
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));

	cout << endl;

	/*Test &test1 = testStack.top();
	testStack.pop();
	test1.print();
	*/

	while(testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	cout << endl;

	//FIFO
	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << endl;

	/*Test &test1 = testQueue.top();
	testQueue.pop();
	test1.print();
	*/

	testQueue.back().print();

	cout << endl;

	while(testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}