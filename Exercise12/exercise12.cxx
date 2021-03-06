// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 12
// created: 24 June 2017
/*
Write a program that asks the user to type an integer N and compute u(N) defined with:
u(0) = 3
u(1) = 2
u(n) = n*u(n-1) + (n-1)*u(n-2) + n
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
  int userIn;
  int u0 = 3;
  int u1 = 2;
  int result;
  int temp;
  int i;

  cout << "Enter an integer: " << endl;
  cin >> userIn;

  if(userIn==0)
  {
    result = u0;
    cout << "Result: " << result << endl;
  }else if(userIn==1)
  {
    result = u1;
    cout << "Result: " << result << endl;
  }else
  {
    for(i=2;i<=userIn;i++)
    {
      temp = (i*u1) + ((i+1)*u0) + i;

      u0 = u1;
      u1 = temp;
    }

    cout << "Result: " << temp << endl;
  }

  return 0;
}
