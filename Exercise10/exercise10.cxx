// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 10
// created: 22 June 2017
/*
Write a program that is able to compute some operations on an integer. The program writes
the value of the integer and writes the following menu:
1. Add 1
2. Multiply by 2
3. Subtract 4
4. Quit
The program asks the user to type a value between 1 and 4. If the user types a value
from 1 to 3, the operation is computed, the integer is written and the menu is
displayed again. If the user types 4, the program quits.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void addOne(int n);
void multiplyByTwo(int n);
void subtractFour(int n);

int main()
{
  int userIn;
  int userChoice;
  int check = -1;

  cout << "Enter an integer:" << endl;
  cin >> userIn;

  while(check == -1)
  {
    cout << "Make a selection:" << endl;
    cout << "1) Add 1" << endl;
    cout << "2) Multiply by 2" << endl;
    cout << "3) Subtract 4" << endl;
    cout << "4) Quit" << endl;

    cin >> userChoice;

    if(userChoice == 1)
    {
      addOne(userIn);
    }else if(userChoice == 2)
    {
      multiplyByTwo(userIn);
    }else if(userChoice == 3)
    {
      subtractFour(userIn);
    }else if(userChoice == 4)
    {
      cout << "QUITTING" << endl;
      check = 0;
    }else
    {
      cout << "ERROR" << endl;
    }
  }

  return 0;
}
//========================

void addOne(int n)
{
  int temp;

  temp = n + 1;

  cout << n << "+1 = " << temp << endl;
}
//========================

void multiplyByTwo(int n)
{
  int temp;

  temp = 2*n;

  cout << "2*" << n << " = " << temp << endl;
}
//========================

void subtractFour(int n)
{
  int temp;

  temp = n-4;

  cout << n << "-4 = " << temp << endl;
}

