// Cola Machine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int choice;
	int dummy;
	cout << "Choose a beverage(1 = Coke, 2 = Water, 3 = Sprite, 4 = Tea, 5 = Coffee): \n";
	cin >> choice;
	switch (choice) {
		case 1:
			cout << "You chose Coke.";
			break;
		case 2:
			cout << "You chose Water.";
			break;
		case 3:
			cout << "You chose Sprite.";
			break;
		case 4:
			cout << "You chose Tea.";
			break;
		case 5:
			cout << "You chose Coffee.";
			break;
		default:
			cout << "Error. choice was not valid, here is your money back.";
			break;
	}
	/*if (choice == 1){
		cout << "You chose Coke.";
	}else if (choice == 2){
		cout << "You chose Water.";
	}else if (choice == 3){
		cout << "You chose Sprite.";
	}else if (choice == 4){
		cout << "You chose Tea.";
	}else if (choice == 5){
		cout << "You chose Coffee.";
	}else{
		cout << "Error. choice was not valid, here is your money back.";
	}
	*/
	cin >> dummy;
	return 0;
}
