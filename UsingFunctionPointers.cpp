// FunctionPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool match(string test) {
	//return (test == "two");
	return (test.size() == 3);
}

int countStrings(vector<string> &texts, bool (*match)(string test)) {
	int tally = 0;

	for(int i = 0; i < texts.size(); i++) {
		if(match(texts[i])) {
			tally++;
		}
	}

	return tally;
}

int main2(int argc, _TCHAR* argv[])
{
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	//cout << match("one") << end;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << countStrings(texts, match) << endl;

	return 0;
}

