// DoWhileLoop 021018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>

using namespace std;


int main()
{
	int iNumber1 = 0, iNumber2 = 0;
	int iChoice = 0;

	cout << "Hello welcome to the program" << endl;

	cout << "Please insert number 1: ";
	cin >> iNumber1;

	cout << "Please insert number 2:  ";
	cin >> iNumber2;

	cout << "\n Please select from the following options: " << endl;
	cout << "1. Add two numbers" << endl;
	cout << "2. Subtract two numbers" << endl;
	cin >> iChoice;

	do
	{


		switch (iChoice)
		{
		case 1:
		{cout << "The total of " << iNumber1 << " and " << iNumber2 << " is: " << iNumber1 + iNumber2 << endl;
		break;}
		case 2: {
			if (iNumber1 > iNumber2) {
				cout << "If you subtract " << iNumber2 << " from " << iNumber1 << " then you will get: " << iNumber1 - iNumber2;
			}
			else {
				cout << "If you subtract " << iNumber1 << " from " << iNumber2 << " then you will get: " << iNumber2 - iNumber1;
			}
			break;
		}
		default:
			cout << "Input not recognised :( " << endl;
			break;
		}
	}

	return 0;
}

