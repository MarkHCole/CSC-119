#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int list[] = { 23, 45, 67, 789, 345, 6, 234, 90, 53 };
	int n = sizeof(list) / sizeof(list[0]);
	int L = list[0];
	int H = list[0];

	cout << n << endl;

	for (int i = 0; i < n; i++) {
		cout << &(list[i]) << endl;

	}
	for (int i = 0; i < n; i++) {
		if (list[i] < L) {
			L = list[i];
		}
		if (list[i] > H) {
			H = list[i];
		}

	}

	cout << L << endl << H << endl;
	L = *min_element(&list[0], &list[n - 1]);
	cout << L << endl;
}
