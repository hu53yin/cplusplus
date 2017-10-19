#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int _main(int argc, _TCHAR* argv[])
{
	string inFileName = "text.txt";
	ifstream inFile;

	inFile.open(inFileName);

	if(inFile.is_open()) {
		string line;

		while(inFile) {
			getline(inFile, line);

			cout << line << endl;
		}
		
		inFile.close();
	} else {
		cout << "Cannot open file: " << inFileName << endl;
	}

	return 0;
}