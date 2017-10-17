// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 16
// created: 26 June 2017
/*
Write a program that asks the user to type an integer N and that writes the number of
prime numbers lesser or equal to N.
*/

#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int n);

int main()
{
  int userIn;
  int i;
  int count=0;
  int primeCheck;

  cout << "Enter an integer: " << endl;
  cin >> userIn;

  for(i=2;i<=userIn;i++)
  {
    primeCheck = isPrime(i);

    if(primeCheck==1)
    {
      count = count + 1; 
    }
  }

  cout << "N = " << userIn << endl;
  cout << count << " prime #'s <= " << userIn << endl;

  return 0;
}
//=================

//=================
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
