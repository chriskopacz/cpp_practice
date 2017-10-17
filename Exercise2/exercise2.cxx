// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 2
// created: 21 June 2017
/*
Write a program that asks the user to type all the integers between 8 and 23 (both
included) using a for loop.
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
  int start = 8;
  int stop = 23;
  int i;
  int userIn;

  cout << "Type all integers between 8 and 23, inclusively:" << endl;

  for(i=start;i<=23;i++)
  {
    cin >> userIn;
    if(userIn != i)
    {
      cout << "Incorrect input." << endl;
      break;
    }
  }

  if(userIn == 23)
  {
    cout << "Complete." << endl;
  }


  return 0;
}
