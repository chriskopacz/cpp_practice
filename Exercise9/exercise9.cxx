// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 9
// created: 22 June 2017
/*
Write a program that asks the user to type an integer between 0 and 20 (both included)
and writes N+17. If someone types a wrong value, the program writes ERROR and he must
type another value.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int userIn = -1;
  int check = -1;
  int temp;

  while(check == -1)
  {
    cout << "Enter an integer between 0 and 20, inclusively:" << endl;
    cin >> userIn;

    if(userIn>=0 && userIn<=20)
    {
      temp = userIn+17;
      check = 0;
    }else
    {
      cout << "ERROR" << endl;
      check = -1;
    }
  }

  cout << userIn << "+17 = " << temp << endl;

  return 0;
}
