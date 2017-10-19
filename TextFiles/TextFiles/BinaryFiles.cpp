#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[50];
	int age;
	double height;
};

#pragma pack(pop)

int _tmain(int argc, _TCHAR* argv[])
{
	Person someone = {"Frodo", 220, 0.8};

	string fileName = "test.bin";

	//// Write binary file //////////////////////////////////////////////////////
	ofstream outputFile;
	outputFile.open(fileName, ios::binary);

	if(outputFile.is_open()) {
		//outputFile.write((char *)&someone, sizeof(Person));
		outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

		outputFile.close();
	} else {
		cout << "Could not create file " + fileName;
	}

	//// Read binary file //////////////////////////////////////////////////////
	Person someoneElse = {};

	ifstream inputFile;
	inputFile.open(fileName, ios::binary);

	if(inputFile.is_open()) {
		//outputFile.write((char *)&someone, sizeof(Person));
		inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

		inputFile.close();
	} else {
		cout << "Could not read file " + fileName;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

	return 0;
}