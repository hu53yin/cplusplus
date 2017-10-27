#include "stdafx.h"
#include <iostream>
#include <memory>

using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "destroyed" << endl;
	}
};

int _tmain() {

	shared_ptr<Test> pTest2(nullptr);

	{
		shared_ptr<Test> pTest1 = make_shared<Test>();

		pTest2 = pTest1;

		auto pTest3 = pTest1;
	}

	cout << "Finished" << endl;
	return 0;
}