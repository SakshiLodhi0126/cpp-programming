#include <iostream>
using namespace std;

int addDigits(int num) {
  while (num >= 10) { // repeat until single digit
    int sum = 0;

    while (num > 0) {  // add all digits
      sum += num % 10; // get last digit
      num /= 10;       // remove last digit
    }

    num = sum; // update number
  }

  return num;
}

int main() {
  int num;
  cout << "Enter number: ";
  cin >> num;

  cout << "Result: " << addDigits(num) << endl;
  return 0;
}