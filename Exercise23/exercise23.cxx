// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 23
// created: 2 August 2017
/*
Request the user to type positive numbers, or to stop by typing a number smaller than 1.
Print the average.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  double average;
  int count=0;
  double sum=0;
  int userIn;

  cout << "Enter positive integers:" << endl;

  while(true)
  {
    cout << ">>> ";
    cin >> userIn;
    if(userIn>=1)
    {
      count++;
      sum += userIn;
    }else
    {
      break;
    }
  }

  if(count>0)
  {
    
    average = sum/count;
    printf("n=%d -> avg=%f\n",count,average);
  }else
  {
    cout << "No numbers entered." << endl;
  }

  return 0;
}
