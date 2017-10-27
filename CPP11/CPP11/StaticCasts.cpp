#include "stdafx.h"
#include <iostream>

using namespace std;

class Parent {
public:
	void speak() {
		cout << "parent!" << endl;
	}
};

class Brother: public Parent {

};

class Sister: public Parent {

};

int main25() {
	Parent parent;
	Brother brother;

	/*float value = 3.23;

	cout << static_cast<int>(value) << endl;*/

	/*Brother *pb = static_cast<Brother *>(&parent);*/
	//cout << pb << endl;
	
	Parent *ppb = &brother;

	Brother *pbb = static_cast<Brother *>(pbb);

	cout << pbb << endl;

	Parent &&p = static_cast<Parent &&>(parent);

	p.speak();

	return 0;
}