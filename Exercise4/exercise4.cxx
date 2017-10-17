// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 4
// created: 21 June 2017
/*
Write a program that asks the user to type 10 integers and writes the sum 
of these integers
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
  int userIn;
  int total = 0;
  int i;
  
  cout << "Enter 10 integers:" << endl;

  for(i=0;i<10;i++)
  {
    cin >> userIn;
    total = total + userIn;
  }

  cout << "Total is: " << total << endl;

  return 0;
}
