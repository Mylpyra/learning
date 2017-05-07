// Pancake Glutton.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string input;	//user input
	int pancakes[10]; //arrary of size 10
	int numberOfElementsInArray = sizeof(pancakes) / sizeof(pancakes[0]);
	int number;
	int maxPancakes = 0; //holds the max pancakes starts at zero so we can compare numbers against it
	int pancakeMaster; //person who ate the max pancakes;
	int dummy;
	int minPancakes;
	int personNotEatingPancakes;

	for (int person = 0; person < numberOfElementsInArray; person++) { //size of returns the size in bites
		cout << "\nEnter how many pancakes person : \n" << person + 1 << "ate: " << endl;
		getline(cin, input);			//get the user input
		stringstream(input) >> number;	//takes the user input and put it into number (cleans it up)
		pancakes[person] = number;			//insert the user input into the array to its correct position
		if (person == 0) {					//if THIS person is the first person
			minPancakes = number;
			personNotEatingPancakes = person;    //THIS person is the person not eating the pancakes
		}
		else {
			if (minPancakes >= number) {
				personNotEatingPancakes = person; //THIS person is the person not eating the pancakes
				cout << "The person who ate least amount of pancakes is: Person " << personNotEatingPancakes + 1 << " with " << pancakes[minPancakes] << " pancakes eaten!";
			}
		}
		if (number >= maxPancakes) {
			maxPancakes = number; //sets the new record
			pancakeMaster = person;  //i holds the address to the array where the number of pancakes he ate, its like a player number, 
								//pancakeMaster holds the position in the array for the last number of pancakes entered
								//i is just a tool for accessing the different elements of the pancake array
			cout << "The pancakemaster is: Person " << pancakeMaster+1 << " with " << pancakes[pancakeMaster] << " pancakes eaten!";
		}
	}
	cin >> dummy;
	return 0;
}