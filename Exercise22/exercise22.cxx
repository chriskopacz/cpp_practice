// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 22
// created: 2 August 2017
/*
Request the user to type positive numbers until either a zero or a negative is typed,
and then show the use rhow many positives were typed in.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int count = 0;
  int userIn=1;

  cout << "Enter integers:" << endl;

  while(true)
  {
    cout << ">>> ";
    cin >> userIn;
    if(userIn>0)
    {
      count++;
    }else
    {
      break;
    }
  }
  
  printf("\n# of positives -> %d\n",count);

  return 0;
}
