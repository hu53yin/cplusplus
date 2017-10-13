#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int _main2(int argc, _TCHAR* argv[])
{
	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();

	cout << "Capacity: " << capacity << endl;

	for(int i = 0; i < 10000; i++) {
		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();

			cout << "Capacity: " << capacity << endl;
		}
		
		numbers.push_back(i);
	}

	numbers.reserve(100000);
	cout << numbers[2] << endl;

	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	return 0;
}