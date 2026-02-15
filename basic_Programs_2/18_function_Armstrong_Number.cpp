#include <cmath>
#include <iostream>

using namespace std;
// Function to check if a number is Armstrong
bool isArmstrong(int num) {
  int original = num;
  int sum = 0;
  int n = num;
  // Count number of digits
  int digits = 0;
  while (n != 0) {
    n /= 10;
    digits++;
  }
  // Calculate sum of digits raised to the power of digits
  n = num;
  while (n != 0) {
    int digit = n % 10;
    sum += pow(digit, digits);
    n /= 10;
  }
  return sum == original;
}
int main() {
  int N;
  cin >> N;
  if (isArmstrong(N))
    cout << "true" << endl;
  else
    cout << "false" << endl;
  return 0;
}
