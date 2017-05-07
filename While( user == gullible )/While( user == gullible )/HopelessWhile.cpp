// While( user == gullible ).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string input;
	int iterations = 0;
	int number;
	int dummy;
	
	while (true){
		cout << "Enter any number other than " << iterations << endl;
		getline(cin, input);			// get the user input
		stringstream(input) >> number;	// and validate the data

		if(number == iterations){
			cout << "Hey! you weren't supposed to enter " << iterations << "!" << endl;
			break;
		}else{
			cout << "You entered: " << number << endl;
			iterations++;
			if(iterations == 10){
				cout << "Wow, you're more patient then I am, you win." << endl;
				break;
			}
			continue;
		}
	}
	cin >> dummy;
	return 0;
}