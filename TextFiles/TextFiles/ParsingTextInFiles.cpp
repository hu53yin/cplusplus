#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int _main2(int argc, _TCHAR* argv[])
{
	string fileName = "stats.txt";
	ifstream input;

	input.open(fileName);

	if(!input.is_open()) {
		return 1;
	}

	while(input) {
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		//input.get();
		input >> ws;

		if(!input) {
			break;
		}

		cout << "'" << line << "'" << " -- '" << population << "'" << endl;
	}

	input.close();

	return 0;
}