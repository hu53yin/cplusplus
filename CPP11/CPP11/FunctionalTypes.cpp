#include "stdafx.h"
#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool check(string &test) {
	return test.size() == 3;
}

class Check {
public:
	bool operator()(string &test) {
		return test.size() == 5;
	}
} check1;

void run(function<bool(string&)> check) {
	string test = "stars";
	cout << check(test) << endl;
}

int main15(int argc, _TCHAR* argv[])
{
	//vector<string> vec{"one", "two", "three"};

	int size = 5;

	static const string arr[] = { "one", "two", "three" };
	vector<string> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

	auto lambda = [size](string test){ return test.size() == size; };

	int count = count_if(vec.begin(), vec.end(), lambda);
	cout << count << endl;

	
	count = count_if(vec.begin(), vec.end(), check);
	cout << count << endl;


	count = count_if(vec.begin(), vec.end(), check1);
	cout << count << endl;


	run(lambda);
	run(check1);
	run(check);

	function<int(int, int)> add = [](int one, int two) { return one + two; };

	cout << add(7, 3) << endl;

	return 0;
}