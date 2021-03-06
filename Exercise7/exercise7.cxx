// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 7
// created: 22 June 2017
/*
Write a program that asks the user to type an integer N and compute u(N) defined with:
u(0)=3
u(n+1)=3*u(n)+4
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int uOfN(int);

int main()
{
  int userIn;
  int result;

  cout << "Enter an integer:" << endl;
  cin >> userIn;

  result = uOfN(userIn);

  cout << "u(" << userIn << ") = " << result << endl;

  return 0;
}

int uOfN(int n)
{
  int u0 = 3;
  int i;
  int temp;

  for(i=1;i<=n;i++)
  {
    temp = (3*u0)+4;
    u0 = temp;
  }
  
  return u0;
}
