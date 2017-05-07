/*
Requires:
variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)

Write a program that ccontinues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.
Modify the program so that after 10 iterations if the user still hasn't entered 5 will tell the user "Wow, you're more patient then I am, you win." and exit.

Modify the program so that it asks the user to enter any number other than the number equal to the number of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number other than 0" and on the second iteration "Please enter any number other than 1"m etc. etc. The program must behave accordingly exiting when the user enters the number they were asked not to.)

The idea of programming is you can write in a finite way, an infinite amount of code.
*/

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string input;	//user input
	int number;		
	int dummy; 
	int iterations = 0;

	while (true){
		cout << "Enter any number other than: " << iterations << "\n";
		getline(cin, input);			//get the user input
		stringstream(input) >> number;	//takes the user input and put it into number

		if (number == iterations) {
			cout << "Hey! You werent supposed to enter " << iterations << "!" << endl;
			break;						//breaks the while loop
		}else{							//if the if statement is false, the program continues to run
			cout << "You entered: " << number << "\n";
			iterations++; 
			if (iterations == 10){		
				cout << "Wow, you're more patient then I am, you win.";
				break;					//stops the while loop
			}
		}
	}
	cin >> dummy; 
	return 0;
}