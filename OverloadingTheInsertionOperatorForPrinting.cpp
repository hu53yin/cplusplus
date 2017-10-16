#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test(): id(0), name("") {
		
	}

	Test(int id, string name): id(id), name(name) {
		
	}

	Test(const Test &other) {
		*this = other;
	}

	const Test &operator=(const Test &other) {
		id = other.id;
		name = other.name;

		return *this;
	}

	friend ostream &operator<<(ostream &out, const Test &test) {
		out << test.id << ": " << test.name;

		return out;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Test test1(10, "Mike");	

	cout << test1 << endl;

	return 0;
}