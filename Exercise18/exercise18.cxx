// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 18
// created: 26 June 2017
/*
Write a program that asks the user to ype the value of N and writes this picture:

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

using namespace std;

void picture(int n);

int main()
{
  int userIn;
  
  cout << "Enter an integer: " << endl;
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

  while(i<=n)
  {
    cout << "N=" << i << endl;
    for(j=i;j>=1;j--)
    {
      for(k=1;k<=j;k++)
      {
	cout << "*";
      }
      cout << endl;
    }

    i++;
  }
}
