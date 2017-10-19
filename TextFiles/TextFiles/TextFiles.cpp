// TextFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int _main1(int argc, _TCHAR* argv[])
{
	//ofstream outFile;

	fstream outFile;

	string outputFileName = "text.txt";

	//outFile.open(outputFileName);
	outFile.open(outputFileName, ios::out);

	if(outFile.is_open()) {
		outFile << "Hello there" << endl;
		outFile << 123 << endl;
		outFile.close();
	} else {
		cout << "Could not create file: " << outputFileName << endl;
	}

	return 0;
}

