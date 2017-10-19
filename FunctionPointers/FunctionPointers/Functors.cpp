#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Test {
	virtual bool operator()(string &text) = 0;

	virtual ~Test() {}
};

struct MatchTest: public Test {
	virtual bool operator()(string &text) {
		return text == "lion";
	}
};

void check(string text, Test &test) {
	if(test(text)) {
		cout << "Text matches!" << endl;
	} else {
		cout << "No match." << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	MatchTest pred;

	string value("lion");

	MatchTest m;

	check("lion", m);

	//cout << pred(value) << endl; 

	return 0;
}