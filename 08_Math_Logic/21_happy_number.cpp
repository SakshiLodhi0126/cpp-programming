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

/* A happy number is a positive integer that eventually reaches 1 when replaced
  by the sum of the squares of its digits, repeated iteratively. If the process
  enters an infinite loop (usually containing the number 4) instead of reaching
  1, it is called an unhappy or sad number. */