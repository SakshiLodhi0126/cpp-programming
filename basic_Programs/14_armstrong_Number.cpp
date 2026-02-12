#include <cmath> //for power function pow()
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int original = n;
  int temp = n;
  int sum = 0;

  // calculate the digit
  int length = 0;
  while (temp != 0) {
    temp = temp / 10;
    length++;
  }

  // power and sum
  sum = 0;
  while (n != 0) {
    int k = n % 10;
    sum += pow(k, length);
    n = n / 10;
  }
  if (sum == original) {
    cout << "Armstrong Number" << endl;
  } else {
    cout << "Not an Armstrong Number" << endl;
  }
  return 0;
}