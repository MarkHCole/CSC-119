#include <iostream>
#include <string>
#include "Tri.h"

using namespace std;

int main() {

	Tri first;
	Tri second(3,4);

	cout << first.calculate() << " " << second.calculate() << endl;

}