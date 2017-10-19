#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person(): name(""), age(0) {
	}

	Person(const Person &other) {
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age): name(name), age(age) {
	}

	void print() const {
		cout << name << ": " << age << flush;
	}

	bool operator<(const Person &other) const {
		if(name == other.name) {
			return age < other.age;
		} else {
			return name < other.name;
		}
	}
};

int _main7(int argc, _TCHAR* argv[]) {
	map<Person, int> people;

	people[Person("Mike", 40)] = 40;
	people[Person("Sue", 30)] = 30;
	people[Person("Raj", 20)] = 20;

	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}
	
	return 0;
}