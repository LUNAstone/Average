// average.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int getUserInput()
{
	int num = 0;

	cout << "Please type a number: ";
	cin >> num;

	return num;
}

int main()
{
	int amountOfNums = 0;
	int total = 0;
	int average;

	cout << "How many numbers do you have? ";
	cin >> amountOfNums;
	cout << endl;

	for(int i = 0; i < amountOfNums; i++)
	{
		total += getUserInput();
	}
    
	average = total / amountOfNums;
	cout << average << endl;
	cin.ignore();
	
	return 0;
}

