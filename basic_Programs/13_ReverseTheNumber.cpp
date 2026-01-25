#include <iostream>
using namespace std;
int main() {
  // a program that takes an integer input and returns the reverse of the number.
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int original = n; // store original number
  int reverse = 0;
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  cout << "The reverse of the number " << original << " is: " << reverse
       << endl;
  return 0;
}