// Cola Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int soda;
int dummy;

int main()
{
	cout << "Choose your favorite soda (1-coke, 2-sprite, 3-rootbeer, 4-orange, 5-grape): ";
	cin >> soda;

	switch (soda)
	{
	case 1:
		cout << "coke";
		break;
	case 2:
		cout << "sprite";
		break;
	case 3:
		cout << "rootbeer";
		break;
	case 4:
		cout << "orange";
		break;
	case 5:
		cout << "grape";
		break;
	default: "Error. choice was not valid, here is your money back";
		break;
	}
	cin >> dummy;
	return 0;
}

