// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 17
// created: 26 June 2017
/*
Write a program that asks the user to type the value of an integer N and compute the
Nth prime number.
*/

#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int n);

int main()
{
  int userIn;
  int count = 0;
  int primeCheck;
  int i=2;
  int result;

  cout << "Enter an integer: " << endl;
  cin >> userIn;

  while(count<userIn)
  {
    primeCheck = isPrime(i);
    
    if(primeCheck==1)
    {
      count = count + 1;
      result = i;
    }

    i++;
  }

  cout << "Nth prime --> " << result << endl;

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
