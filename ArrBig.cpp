// ArrBig.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
	int arr[] = { 100, 7, 1, 2, 3, 4, 5, 6, 7, 8 };

	const int size = sizeof(arr) / sizeof(arr[0]);
	
	int temp;
	bool sort;

	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-1; j++) {
			sort = false;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				sort = true;
			}
		}
		cout << "sort" << endl;
		if (sort == false) { break; }
	}

	for (int i = 0; i < size; i++) {
		cout<< arr[i]<< ", ";
	}


}
