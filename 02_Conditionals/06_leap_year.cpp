#include <iostream>
using namespace std;

// Check leap year
int main() {
  int year;
  cin >> year;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    cout << "Leap Year";
  else
    cout << "Not Leap Year";

  return 0;
}