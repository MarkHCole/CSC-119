// Reimann.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void one();
void two();
void three();
void four();

float power;
float control = 1;
float startpt;
float endpt;
float rectangles;
float point;
float deltax;
float area=0;
float currentloc;
int stop = 1;

using namespace std;

int main()
{
	while (stop == 1) {
		cout << "What is the highest power? (Up to four is supported)" << endl;
		cin >> power;

		cout << "Start point." << endl;
		cin >> startpt;

		cout << "End point." << endl;
		cin >> endpt;

		cout << "How many Rectangles?" << endl;
		cin >> rectangles;

		cout << "1 for left hand, 2 for right hand, 3 for centerpoint." << endl;
		cin >> point;

		deltax = abs((endpt - startpt) / rectangles);

		if (power == 1) {
			one();
		}
		else if (power == 2) {
			two();
		}
		else if (power == 3) {
			three();
		}
		else if (power == 4) {
			four();
		}
		cout << "To quit, input any number other than 1." << endl;
		cin >> stop;
	}
}

void one() {
	float multone;
	float constant;
	float rect;

	cout << "What is the term's coefficient?" << endl;
	cin >> multone;

	cout << "What is the value of any constants?" << endl;
	cin >> constant;

	if (point == 1) {
		currentloc = startpt;
		while (currentloc < endpt) {
			rect = (multone * currentloc + constant) * deltax;
			area = area + rect;
			currentloc = currentloc + deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc << endl;

		}
		cout << endl << area<<" square units"<<endl;
	}

	if (point == 2) {
		currentloc = endpt;
		while (currentloc > startpt) {
			rect = (multone * currentloc + constant) * deltax;
			area = area + rect;
			currentloc = currentloc - deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc << endl;

		}
		cout << endl << area << " square units" << endl;
	}

	if (point == 3) {
		currentloc = startpt + (deltax / 2);
		while (currentloc < endpt) {
			rect = (multone * currentloc + constant) * deltax;
			area = area + rect;
			currentloc = currentloc + deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc << endl;
		
		}
		cout <<endl << area << " total square units" << endl;
	}
}

void two() {
	float multone;
	float multwo;
	float constant;
	float rect;

	cout << "What is the first term's coefficient?" << endl;
	cin >> multone;

	cout << "What is the second term's coefficient?" << endl;
	cin >> multwo;

	cout << "What is the value of any constants?" << endl;
	cin >> constant;

	if (point == 1) {
		currentloc = startpt;
		while (currentloc < endpt) {
			rect = ((currentloc*currentloc)*multwo + (multone * currentloc) + constant) * deltax;
			area = area + rect;
			currentloc = currentloc + deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc << endl;

		}
		cout << endl << area << " square units" << endl;
	}

	if (point == 2) {
		currentloc = endpt;
		while (currentloc > startpt) {
			rect = ((currentloc * currentloc) * multwo + (multone * currentloc) + constant) * deltax;
			area = area + rect;
			currentloc = currentloc - deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc << endl;

		}
		cout << endl << area << " square units" << endl;
	}

	if (point == 3) {
		currentloc = startpt + (deltax / 2);
		while (currentloc < endpt) {
			rect = ((currentloc * currentloc) * multwo + (multone * currentloc) + constant) * deltax;
			area = area + rect;
			currentloc = currentloc + deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc << endl;

		}
		cout << endl << area << " total square units" << endl;
	}

}


void three() {
	float multone;
	float multwo;
	float multhree;
	float constant;
	float rect;

	cout << "What is the first term's coefficient?" << endl;
	cin >> multone;

	cout << "What is the second term's coefficient?" << endl;
	cin >> multwo;

	cout << "What is the third term's coefficient?" << endl;
	cin >> multhree;

	cout << "What is the value of any constants?" << endl;
	cin >> constant;

	if (point == 1) {
		currentloc = startpt;
		while (currentloc < endpt) {
			rect = ((currentloc * currentloc * currentloc)*multhree + (currentloc * currentloc) * multwo + (multone * currentloc) + constant) * deltax;
			area = area + rect;
			currentloc = currentloc + deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc -deltax << endl;

		}
		cout << endl << area << " square units" << endl;
	}

	if (point == 2) {
		currentloc = endpt;
		while (currentloc > startpt) {
			rect = ((currentloc * currentloc * currentloc) * multhree + (currentloc * currentloc) * multwo + (multone * currentloc) + constant) * deltax;
			area = area + rect;
			currentloc = currentloc - deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc+deltax<< endl;

		}
		cout << endl << area << " square units" << endl;
	}

	if (point == 3) {
		currentloc = startpt + (deltax / 2);
		while (currentloc < endpt) {
			rect = ((currentloc * currentloc * currentloc) * multhree + (currentloc * currentloc) * multwo + (multone * currentloc) + constant) * deltax;
			area = area + rect;
			currentloc = currentloc + deltax;
			cout << rect << " square subunits.   Current Location : " << currentloc - deltax << endl;

		}
		cout << endl << area << " total square units" << endl;
	}


}

void four() {


}