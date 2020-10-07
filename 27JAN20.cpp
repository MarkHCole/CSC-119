#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int age;
	int year = 2020;

	cout << "Hello world." << endl;
	cout << "Enter your name." << endl;
	getline(cin, name);
	cout << "Enter your age." << endl;
	cin >> age;
	cout << "Hello, " << name << ".  You are " << age << " years old." << endl;

	while (age <= 100) {
		cout << "In " << year << ", you will be " << age << "." << endl;
		year++;
		age++;

	}

	return 0;
}

