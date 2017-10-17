// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 5
// created: 21 June 2017
/*
Write a program that asks the user to type 10 integers and writes the smallest value.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int userIn;
  int smallest;
  int i=0;

  cout << "Enter 10 integers:" << endl;

  while(i < 10)
  {
    cin >> userIn;
    if(i==0)
    {
      smallest = userIn;
    }
    else
    {
      if(userIn < smallest)
      {
	smallest = userIn;
      }
    }
    i++;
  }

  cout << "Smallest: " << smallest << endl;


  return 0;
}
