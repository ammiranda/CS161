#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  int steps;
  int num;
  int high = INT_MIN;
  int low = INT_MAX;

  cout << "How many numbers do you want to enter?" << endl;
  cin >> steps;

  for (int i = steps; i > 0; i--) {
    cout << "Enter a number:" << endl;
    cin >> num;
    
    if (num > high) {
      high = num;
    } else if (num < low) {
      low = num;
    }
  }

  cout << "The largest of the numbers entered was: " << high << endl;
  cout << "The smallest of the numbers entered was: " << low << endl;

  return 0;
}
