// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 24
// created: 2 August 2017
/*
Request the user to type numbers, or type 0 to stop. Show how many numbers were between
100 and 200 (both included).
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int count = 0;
  int userIn;

  cout << "Enter numbers (0 to stop):" << endl;

  while(true)
  {
    cout << ">>> ";
    cin >> userIn;

    if(userIn==0)
    {
      break;
    }else if(userIn>=100 && userIn<=200)
    {
      count++;
    }
  }

  printf("100<=x<=200 -> n=%d\n",count);

  return 0;
}
