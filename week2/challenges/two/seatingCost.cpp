/**********************************
 * Name: Alexander Miranda
 * Date: April 4, 2015
 * Description: Program that calculates the profits from ticket sales
***********************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
  // Defining the costs of each seating section as constants
  const float SEATA_COST = 15.00;
  const float SEATB_COST = 12.00;
  const float SEATC_COST = 9.00;

  // Declaring the number of seats in each section and the
  // total profit fields
  int numOfSeatsA;
  int numOfSeatsB;
  int numOfSeatsC;
  float totalProfit; 
  
  // Prompt the user for the number of each ticket sold
  cout << "How many seats in section A were sold?" << endl;
  cin >> numOfSeatsA;

  cout << "How many seats in section B were sold?" << endl;
  cin >> numOfSeatsB;

  cout << "How many seats in section C were sold?" << endl;
  cin >> numOfSeatsC;

  // Calculate the total profit based on the number of tickets sold
  totalProfit = SEATA_COST * numOfSeatsA + SEATB_COST * numOfSeatsB + SEATC_COST * numOfSeatsC;
 
  cout.precision(2);
  cout << "Total profit from ticket sales: $" << fixed << totalProfit << endl;

  return 0;
} 
