#include <iostream>
using namespace std;
int main() {
  int n, digit, sum, sqNo;
  cout << "Enter any number: ";
  cin >> n;
  int original = n;
  while (n != 1 && n != 7) {
    sum = 0;
    while (n != 0) {
      digit = n % 10;
      n = n / 10;
      sqNo = digit * digit;
      sum = sum + sqNo;
    }
    n = sum;
  }
  if (n == 1 or n == 7) {
    cout << original << " is a happy number.";
  } else {
    cout << original << " is not a happy number.";
  }
  return 0;
}