// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 19
// created: 26 June 2017
/*
Write a program that asks the user to ype the value of N and display an output like
the following:
N=1
*
N=2
**
 *
N=3
***
 **
  *
and so on...
*/

#include <iostream>
#include <stdio.h>

using namespace std;

void picture(int n);

int main()
{
  int userIn;
  
  cout << "Enter an integer:" << endl;
  cin >> userIn;

  picture(userIn);

  
  return 0;
}
//=================

//=================
void picture(int n)
{
  int i=1;
  int j;
  int k;
  char temp[] = "**********\n";

  while(i<=n)
  {
    cout << "N=" << i << endl;
    for(j=0;j<i;j++)
    {
      printf("%*.*s\n",i,i-j,temp);
    }
    i++;
  }
}
