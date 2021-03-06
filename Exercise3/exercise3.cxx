// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 3
// created: 21 June 2017
/*
Write a program that asks the user to type all the integers between 8 and 23 (both
included) using a WHILE loop.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int start = 8;
  int stop = 23;
  int i = start;
  int userIn;

  cout << "Enter all integers between 8 and 23, inclusively:" << endl;

  while(i<=stop)
  {
    cin >> userIn;
    if(userIn != i)
    {
      cout << "Invalid input." << endl;
      break;
    }
    else
    {
      i++;
    }
  }

  if(userIn == 23)
  {
    cout << "Complete" << endl;
  }

  return 0;
}
