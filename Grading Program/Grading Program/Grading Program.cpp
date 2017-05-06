// Grading Program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int num;
int dummy;

int main()
{
	while (true)
	{
		cout << "Enter grade score: ";
		cin >> num;

		if (num >= 0 && num <= 100)
		{
			if (num == 100)
				cout << "you got a perfect score! \n";
		}
		if (num >= 90 && num <= 100)
		{
			cout << "You got an A";
		}
		else if (num >= 80 && num <= 89)
		{
			cout << "You got an B";
		}
		else if (num >= 70 && num <= 79)
		{
			cout << "You got an C";
		}
		else if (num >= 60 && num <= 69)
		{
			cout << "You got an D";
		}
		else if (num <= 59)
		{
			cout << "You got an F";
		}
		else
		{
			cout << num << " is not a valid score";
		}
	}
	return 0;
=======
int main(){
	int input;
	int dummy;
	cout << "Enter grade score: \n";
	while (true) {
		int input;
		cin >> input;
		if (input >= 0 && input <= 100) {
			if (input == 100) {
				cout << "You got a perfect score!\n";
			}
			if (input <= 100 && input >= 90) {
				cout << "You got an A!";
			}else if(input <= 89 && input >= 80) {
				cout << "You got a B!";
			}else if (input <= 79 && input >= 70) {
				cout << "You got a C!";
			}else if (input <= 69 && input >= 60) {
				cout << "You got a D!";
			}else if (input <= 59 && input >= 0) {
				cout << "You got an F!";
			}
			cin >> dummy;
			return 0;
		} else {
			cout << "You can't score ";
			cout << input;
		}
	}
	
    return 0;
>>>>>>> 897f00d9272098af14dc58e205b2313c0bc99cbc
}


