#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

//class Test {
//private:
//	static const int SIZE=100;
//	int *_pBuffer;
//
//public:
//	Test() {
//		cout << "constructor" << endl;
//		_pBuffer = new int[SIZE]();
//
//		//_pBuffer = new int[SIZE]{};
//		//memset(_pBuffer, 0, sizeof(int)*SIZE);
//	}
//
//	Test(int i) {
//		cout << "parameterized constructor" << endl;
//
//		_pBuffer = new int[SIZE]();
//
//		for(int i = 0; i < SIZE; i++) {
//			_pBuffer[i] = 7 * i;
//		}
//	}
//
//	Test(const Test &other) {
//		cout << "copy constructor" << endl;
//
//		_pBuffer = new int[SIZE]();
//
//		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
//	}
//
//	Test &operator=(const Test &other) {
//		cout << "assignment" << endl;
//
//		_pBuffer = new int[SIZE]();
//
//		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
//
//		return *this;
//	}
//
//	~Test() {
//		cout << "destructor" << endl;
//
//		delete [] _pBuffer;
//	}
//
//	friend ostream &operator<<(ostream &out, const Test &test);
//};
//
//ostream &operator<<(ostream &out, const Test &test) {
//	out << "Hello from test";
//	return out;
//}
//
//Test getTest() {
//	return Test();
//}

int main21(int argc, _TCHAR* argv[])
{
	//-fno-elide-constructors
	/*Test test1 = getTest();

	cout << test1 << endl;

	vector<Test> vec;
	vec.push_back(Test());

	Test &rTest1 = test1;

	const Test &rTest2 = getTest();

	Test test2(Test(1));*/

	return 0;
}