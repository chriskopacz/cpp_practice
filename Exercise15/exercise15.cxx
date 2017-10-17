// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 15
// created: 26 June 2017
/*
Write a program that asks the user to type an integer N and that indicates if N is
a prime number or not.
*/

#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int n);

int main()
{
  int userIn;
  int primeCheck;

  cout << "Enter an integer:" << endl;
  cin >> userIn;

  primeCheck = isPrime(userIn);

  if(primeCheck == 1)
  {
    cout << "N = " << userIn << " --> Prime" << endl;
  }else
  {
    cout << "N = " << userIn << " --> Not Prime" << endl;
  }

  return 0;
}
//==============

//==============
int isPrime(int n)
{
  double stop;
  int i;

  stop = sqrt(n);

  if(n==2)
  {
    return 1;
  }

  for(i=2;i<=stop;i++)
  {
    if(n%i==0)
    {
      return -1;
    }
  }

  return 1;
}
