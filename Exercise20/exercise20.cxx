// Chris Kopacz
// C++ Exercises from: 
// https://en.wikibooks.org/wiki/C%2B%2B_Programming/Exercises/Iterations
// Exercise 20
// created: 2 August 2017
/*
u(n) is defined with:
u(0) = a (a is an integer)
if u(n) is even, then u(n+1) = u(n)/2, else u(n+1) = 3*u(n)+1
Conjecture: for all value of a, there exists a value N such that u(n)=1

a) Write a program that asks the user to type the value of an integer a and writes all
the values of u(n) from n=1 to n=N

b) Write a program that asks the user to type a value M and computes the value of "a"
from 2 to M that maximizes the value of N. This value is called A. The program must
write the value of A and N.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int u_of_n(int r);

int main()
{
  int userIn;
  int result;
  int i = 0;
  int maxN = 0;
  int j;
  int maxNj;


  //part 20a
  /*
  cout << "Enter an integer:" << endl;
  cin >> userIn;
  result = userIn;

  while(result!=1)
  {
    result = u_of_n(result);
    i++;
  }
  printf("u(N)=%d -> N=%d\n",result, i);
  */

  //part 20b
  cout << "ENter an integer:" << endl;
  cin >> userIn;
  for(j=2;j<=userIn;j++)
  {
    result = j;
    i = 0;
    while(result!=1)
    {
      result = u_of_n(result);
      i++;
    }
    if(i>maxN)
    {
      maxN = i;
      maxNj = j;
    }
  }

  printf("u(0)=%d -> N=%d\n",maxNj,maxN);
  
  return 0;
}

//===========

//===========
//part 20a
int u_of_n(int r)
{
  if(r%2==0)
  {
    return (r/2);
  }else
  {
    return (3*r + 1);
  }
}
