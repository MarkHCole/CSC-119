#include <iostream>
#include <string>

using namespace std;

void manip(int*, int);

int main()
{
	int Y = 5;
	int* X = &Y;
	int Z = 5;

    cout << "This is an example of passing variables by reference and value." << endl <<  "Y will be passed by reference, and Z will be passed by value."
		<<endl<<"The current value of Y is: " << Y << endl<<"The current value of Z is: "<<Z<<endl;

	manip(X, Z);

	cout << "After adding 5 to Y in the sub-function, Y is now: " << Y << endl << "After adding 5 to Z in the sub-function, Z is now: " << Z << endl <<
		"The value of Y was changed due to it being passed by reference," << endl << "whereas the value of Z was not changed due to it being passed by value" << endl;
}

void manip(int *X, int Z) {

	*X = *X + 5;
	Z = Z + 5;
}

