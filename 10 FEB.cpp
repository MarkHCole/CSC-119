#include <iostream>
#include <string>
using namespace std;

int increment(int&);

int main()
{
	string name = "Mark Cole";
	int y = 5;
	int scores[5];
	int score[] = {98, 100, 77, 43, 88, 27 };
	int low = score [0];
	cout << increment(y) << endl;
	cout << y << endl;

	cout << name[3] << endl;

	for (int a = 0; a <= 5; a++) {
		cout << score[a] << endl;

		if (score[a] < low) {
			low = score[a];
		}

	}cout << "Lowest score is " << low << endl;
}

int increment(int &x) {

	x++;
	return x;
}