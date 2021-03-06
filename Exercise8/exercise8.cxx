// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 8
// created: 22 June 2017
/*
Write a program that asks the user to type an integer N and compute u(N) defined with:
u(0) = 1
u(1) = 1
u(n+1) = u(n) + u(n-1)
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int uFunction(int);

int main()
{
  int userIn;
  int funcOut;

  cout << "Enter an integer:" << endl;
  cin >> userIn;

  if(userIn == 0)
  {
    funcOut = 1;
  }else if(userIn == 1)
  {
    funcOut = 1;
  }else
  {
    funcOut = uFunction(userIn);
  }

  cout << "u(" << userIn << ") = " << funcOut << endl;
}
//==============

int uFunction(int n)
{
  int u0 = 1;
  int u1 = 1;
  int result;
  int i;

  for(i=2;i<=n;i++)
  {
    result = u0+u1;
    u0 = u1;
    u1 = result;
  }

  return result;
}
