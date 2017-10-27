#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

//class Test {
//private:
//	static const int SIZE = 100;
//	int *_pBuffer;
//	//int *_pBuffer{nullptr};
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
//	Test(Test &&other) {
//		cout << "Move constructor" << endl;
//
//		_pBuffer = other._pBuffer;
//		other._pBuffer = nullptr;
//	}
//
//	Test &operator=(const Test &other) {
//		_pBuffer = new int[SIZE]();
//
//		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
//
//		return *this;
//	}
//
//	Test &operator=(Test &&other) {
//		cout << "Move assignment" << endl;
//
//		delete [] _pBuffer;
//		_pBuffer = other._pBuffer;
//		other._pBuffer = nullptr;
//
//		return *this;
//	}
//
//	~Test() {
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

int main24(int argc, _TCHAR* argv[])
{
	/*vector<Test> vec;
	vec.push_back(Test());

	Test test;
	test = getTest();*/

	return 0;
}