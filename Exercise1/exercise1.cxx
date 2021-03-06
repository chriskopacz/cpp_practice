// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 1
// created: 21 June 2017
/*
Write a program that asks the user to type an integer and writes "YOU WIN" if the
 value is between 56 and 78 (both included). In the other case it writes "YOU LOSE".
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int userInput;

	cout << "Enter an integer value:" << endl;
	cin >> userInput;

	if (userInput >= 56 && userInput <= 78)
	{
	  cout << "YOU WIN" << endl;
	}
	else
	{
	  cout << "YOU LOSE" << endl;
	}

    return 0;
}
