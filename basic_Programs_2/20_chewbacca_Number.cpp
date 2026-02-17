#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int original = n;
  int inverse = 0;
  int reverse = 0;
  while (n != 0) {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n /= 10;
  }
  while (reverse != 0) {
    int digit = reverse % 10;
    if (digit < 9 - digit) {
      inverse = inverse * 10 + digit;
    } else if (digit == 9) {
      inverse = inverse * 10 + 9;
    } else {
      inverse = inverse * 10 + 9 - digit;
    }
    reverse /= 10;
  }
  if (inverse < original) {
    cout << inverse;
  } else {
    cout << original;
  }
  return 0;
}