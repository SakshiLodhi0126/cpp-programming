#include <iostream>
using namespace std;
int main() {
  // a program that takes an integer input and returns the sum of the digits of n.
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int original = n; // store original number
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  cout << "The sum of the digits of " << original << " is: " << sum << endl;
  return 0;
}
