//MARK COLE

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Input;   //catches user input
	string Compare; //used for string comparison
	int length;     //used to hold user input string length

	while (Input != "Quit") {                                                                                 //A while loop is used to allow the user to test multiple words if they so desire.
		
		Compare.clear();                                                                                      //Variable used for string comparison needs to be cleared if loop is run more than once.

		cout << "Input a word in lowercase to check if it is a palindrome, or type QUIT to exit." << endl;
		cin >> Input;                                                                                         //User inputs chosen word to compare or QUIT to exit.

		if (Input == "QUIT") {                                                                                //Checks if user input QUIT.
			return 0;
		}

		length = Input.length();                                                                              //Used in in initialization of for loop.

		for (int i = length - 1; i >= 0; i--) {                                                               //Loop variable is initialized to the length of the input string -1, then incremented down.
			Compare.push_back(Input.at(i));                                                                   //Input is written from the last letter to the first into the comparison variable.
		}

		if (Compare == Input) {                                                                               //Comparison statement with answer output.
			cout << "The word " << Input << " is a palindrome." << endl << endl;
			}
		else {
			cout << "The word " << Input << " is not a palindrome." << endl << endl;
		}
	}
		return 0;                                                                                             //Secondary exit condition in case user types Quit instead of QUIT.
}