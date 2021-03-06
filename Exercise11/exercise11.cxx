// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 11
// created: 24 June 2017
/*
Write a program that asks the user to type a positive integer. WHen the user types a 
negative value the program writes ERROR and asks for another value. When the user types
0, that means that the last value has been typed and the program must write the average
of the positive integers. If the number of yped values is zero, the program writes
'NO AVERAGE'.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void getAverage(int n, int t);

int main()
{
  int userIn;
  int total = 0;
  int count = 0;
  int check = 0;

  while(check==0)
  {
    cout << "Enter positive integer values, 0 to stop: " << endl;
    cin >> userIn;

    if(userIn<0)
    {
      cout << "ERROR" << endl;
    }else if(userIn == 0)
    {
      getAverage(count,total);
      check = -1;
    }else
    {
      total = total + userIn;
      count = count + 1;
    }
  }

  return 0;
}
//==================

void getAverage(int n, int t)
{
  double average;

  if(n==0)
  {
    cout << "NO AVERAGE" << endl;
  }else
  {
    average = t/n;

    cout << "AVERAGE: " << average << endl;
  }
}
