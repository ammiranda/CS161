#include <iostream>
using namespace std;

int main()
{
  int first, second;
  int sum = 0;

  cout << "Enter an integer:" << endl;
  cin >> first;

  cout << "Enter an integer:" << endl;
  cin >> second;

  if (first > second) {
    for (int i = second; i <= first; i++){
      sum += i;
    }
  } else if (second >= first) {
    for (int i = first; i <= second; i++){
      sum += i;
    }
  }

  cout << "Total sum is: " << sum << endl;

  return 0;
}
