// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 14
// created: 26 June 2017
/*
Write a program that asks the user to type the value of N and computes N!
*/

#include <iostream>

using namespace std;

void nFactorial(int n);

int main()
{
  int userIn;

  cout << "Enter an integer value: " << endl;
  cin >> userIn;
  nFactorial(userIn);

  return 0;
}
//================

//================
void nFactorial(int n)
{
  int i;
  int result = 1;

  for(i=1;i<=n;i++)
  {
    result = result*i;
  }

  cout << "N = " << n << " --> N! = " << result << endl;
}
