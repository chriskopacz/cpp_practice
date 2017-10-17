// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 6
//created: 22 June 2017
/*
Write a program that asks the user to type an integer N and computes the sum of the cubes
from 5^3 to N^3
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
  double userIn;
  int i;
  int total=0;
  int temp=0;

  cout << "Enter an integer greater than 5:" << endl;
  cin >> userIn;

  for(i=5;i<=userIn;i++)
  {
    temp = pow(i,3);
    total = total + temp;
  }

  cout << "Total: " << total << endl;


  return 0;
}

