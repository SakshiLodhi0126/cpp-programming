#include <iostream>
using namespace std;
int sumOfDigits(int n) {
  int digitSum = 0;
  while (n > 0) {
    int lastDigit = n % 10;
    n /= 10;
    digitSum += lastDigit;
  }
  return digitSum;
}
int main() {
  cout << "Sum = " << sumOfDigits(7439) << endl;
  cout << "Sum = " << sumOfDigits(9964) << endl;
  return 0;
}