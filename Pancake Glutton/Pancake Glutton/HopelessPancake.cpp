// Pancake Glutton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main2()
{
	int pancakes[10];
	string input;
	int number;
	int numberOfElementsInArray = sizeof(pancakes) / sizeof(pancakes[0]);
	int maxPancakes = 0;
	int minPancakes;
	int pancakeMaster;
	int me;
	int dummy;
	for (int person = 0;person < numberOfElementsInArray;person++) {
		cout << "Enter count of pancakes Person " << person+1 << " ate:" << endl; // ask how many pancakes this person ate
		getline(cin, input);			// get the user input
		stringstream(input) >> number;	// clean it up
		pancakes[person] = number;			// insert the value into the array to it's correct position

		if (person == 0) {					// if it's the first iteration we set the person who ate minimun and also the lowest score
			minPancakes = number;
			me = person;
		}else{							// if it's not we check if this person ate less than the last lowest score holder
			if (minPancakes >= number) {
				me = person;
				minPancakes = number;
			}
		}

		if (number >= maxPancakes) {	// we check to see if this person ate more pancakes than the persons before
			pancakeMaster = person;
			maxPancakes = number;
			cout << "The pancakemaster is: Person " << pancakeMaster + 1 << " with " << pancakes[pancakeMaster] << " pancakes eaten!" << endl;
		}
	}

	
	cout << "Person who ate least amount of pancakes is: Person " << me+1 << " with " << pancakes[me] << endl ;
	cin >> dummy;
	return 0;
}

