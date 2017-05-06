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
}


