// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 13
// created: 24 June 2017
/*
Write a program that asks the user to type 10 integers and write the number of occurrence
of the biggest value.
*/

#include <iostream>

using namespace std;

int main()
{
  int userIn;
  int biggest = 0;
  int count = 0;
  int i;

  cout << "Enter 10 integers:" << endl;

  for(i=0;i<10;i++)
  {
    cin >> userIn;
    
    if(userIn > biggest)
    {
      biggest = userIn;
      count = 1;
    }else if(userIn == biggest)
    {
      count = count + 1;
    }
  }
  
  cout << "Biggest value: " << biggest << endl;
  cout << "Freq. of Occurrence: " << count << endl;

  return 0;
}
