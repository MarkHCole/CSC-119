// MARK COLE
// Write a program on string member functions: Copy, Length, Swap, Append, Assign, Find, and Insert

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	string holder;  //used to store the user input string for later
	char Copy[10];  //Created with 10 Bytes assigned to hold information from the copy function

	cout << "Input a word or phrase." << endl;
	getline(cin, input);
	holder = input; //storing user input string in the holder

	size_t length = input.copy(Copy, 6, 0); //used to assign appropriate length to variable and execute copy function
	Copy[length] = '\0';  //used to properly terminate the copied string of characters
	cout << "The first six characters are: " << Copy << endl;	

	cout << "The length of the input string is: " << input.length() << endl;  //outputs string length

	string Swap = "Cucumber";  //used to demonstrate swap function

	cout << "Before swapping the other string is: " << Swap << "." << endl;
	input.swap(Swap);  //swapping input with Swap variable
	cout << "Now the variable holding your input is: " << input << endl;

	input.assign(holder);  //returning the string to its original value
	cout << "Let's use the assign function to change your string back to: " << input << endl;

	input.append("s");  //adds an 's' to the end
	cout << "Now, with an 's' added to the end, the string is: " << input << endl;

	
	cout << "The first 's' in your string is at position: " << input.find('s')<<endl;  //finds the first s, and uses the appended value if there isn't one

	input.insert(1, Swap);  //since the variable "Swap" now contains the original string, it inserts the string after the first character
	cout << "After we insert a your original string back into your string again, it reads: " << input << endl;

}
