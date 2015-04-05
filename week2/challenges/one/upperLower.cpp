/*********************************************
 * Name: Alexander Miranda
 * Date: April 4, 2015
 * Description: Ask the user for upper and lower bounds and print
 * out five random numbers that lie within set range
**********************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main()
{
  // Declaring relevant fields
  int upperBound, lowerBound, range, rnd;

  // Initializing the seed
  srand((unsigned)time(NULL));

  // Prompting the user for input
  cout << "Enter the upper bound." << endl;
  cin >> upperBound;

  cout << "Enter the lower bound." << endl;
  cin >> lowerBound;

  // Calculating the range between the upper and lower bounds
  range = upperBound - lowerBound + 1;

  // Outputting the random number series
  cout << "Five random numbers within the range ";
  cout << "will appear below:" << endl;

  for (int i = 0; i < 5; i++){
    // Calculating the random number using rand()
    rnd = lowerBound + rand() % range;
    cout << rnd << endl;
  }  
  
  return 0;
}

