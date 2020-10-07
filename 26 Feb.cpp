//Classes are blueprints for user defined objects (real world objects)
//Objects are instances of each class (instantiation)
//Classes are defined by the Declaration (Header) file and Definition (Specification) file

#include <iostream>
#include <string>
#include "Area.h"

using namespace std;

int main() {
	Area first;
	cout << first.getlength() << endl;
	cout << first.getwidth() << endl;

	Area second(23.0, 45.6);
	cout << second.getlength() << endl;
	cout << second.getwidth() << endl;

	float L;
	float W;

	cout << "enter new dimensions" << endl;
	cin >> L >> W;

	first.setlength(L);
	first.setwidth(W);

	cout << first.CalculateArea();

	return 0;
}