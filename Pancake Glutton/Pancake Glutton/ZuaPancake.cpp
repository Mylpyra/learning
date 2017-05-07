// Pancake Glutton.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <functional>
using namespace std;

int sortIntArray(int* arrayToSort, int size, bool asc, int* arrayIndexes)
{
	int i, j, first, temp, temp2;
	if (!asc) { //descending order
		for (i = size - 1; i > 0; i--) {
			first = 0;                    // initialize to subscript of first element
			for (j = 1; j <= i; j++) {    // locate smallest between positions 1 and i.
				if (*(arrayToSort + j) < *(arrayToSort + first))
					first = j;
			}
			temp2 = *(arrayIndexes + first);   // Get the indexes in order
			*(arrayIndexes + first) = *(arrayIndexes + i);
			*(arrayIndexes + i) = temp2;

			temp = *(arrayToSort + first);   // Swap smallest found with element in position i.
			*(arrayToSort + first) = *(arrayToSort + i);
			*(arrayToSort + i) = temp;
		}
	}
	else {        //ascending order
		for (i = size - 1; i > 0; i--) {
			first = 0;                    // initialize to subscript of first element
			for (j = 1; j <= i; j++) {    // locate biggest between positions 1 and i.
				if (*(arrayToSort + j) > *(arrayToSort + first))
					first = j;
			}
			temp2 = *(arrayIndexes + first);   // Get the indexes in order
			*(arrayIndexes + first) = *(arrayIndexes + i);
			*(arrayIndexes + i) = temp2;
			temp = *(arrayToSort + first);   // Swap biggest found with element in position i.
			*(arrayToSort + first) = *(arrayToSort + i);
			*(arrayToSort + i) = temp;
		}
	}
	return 1;
}

int main()
{
	std::map<int, int, std::greater<int> > map; // we need to keep track of who ate how many pancakes, will be ordered automaticly from highest to lowest (greater first)
	string input;	//user input
	int pancakes[10]; //arrary of size 10
	int numberOfElementsInArray = sizeof(pancakes) / sizeof(pancakes[0]);
	int number;
	int maxPancakes = 0; //holds the max pancakes starts at zero so we can compare numbers against it
	int pancakeMaster; //person who ate the max pancakes;	
	int minPancakes;
	int personNotEatingPancakes;
	int dummy;
	for (int person = 0; person < numberOfElementsInArray; person++) { //size of returns the size in bites
		cout << "\nEnter how many pancakes person " << person + 1 << " ate: " << endl;
		getline(cin, input);			//get the user input
		stringstream(input) >> number;	//takes the user input and put it into number (cleans it up)
		pancakes[person] = number;			//insert the user input into the array to its correct position
		map[number] = person;    // this orders everything automaticly 
		if (person == 0) {					//if THIS person is the first person
			minPancakes = number;
			personNotEatingPancakes = person;    //THIS person is the person not eating the pancakes
		}
		else {
			if (minPancakes >= number) {
				personNotEatingPancakes = person; //THIS person is the person not eating the pancakes
				minPancakes = number; //sets the new record lowest amout pancakes eaten
				cout << "\nThe person who ate least amount of pancakes is: Person " << personNotEatingPancakes + 1 << " with " << minPancakes << " pancakes eaten!";
			}
		}
		if (number >= maxPancakes) {
			maxPancakes = number; //sets the new record highest pancakes eaten
			pancakeMaster = person;  //i holds the address to the array where the number of pancakes he ate, its like a player number, 
								//pancakeMaster holds the position in the array for the last number of pancakes entered
								//i is just a tool for accessing the different elements of the pancake array
			cout << "\nThe pancakemaster is: Person " << pancakeMaster+1 << " with " << pancakes[pancakeMaster] << " pancakes eaten!";
		}
	}

	int personOrder[10] = { 0,1,2,3,4,5,6,7,8,9 };
	sortIntArray(pancakes, numberOfElementsInArray, false, personOrder);
	for (int i = 0; i < numberOfElementsInArray; i++) {
		cout << "Person " << personOrder[i] + 1 << " ate " << pancakes[i] << " pancakes." << endl;
	}
	cin >> dummy;
	return 0;
}
