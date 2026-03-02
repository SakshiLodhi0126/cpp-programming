#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  // addition using bitwise
  while (b != 0) {
    int carry = a & b; // carry
    a = a ^ b;         // sum without carry
    b = carry << 1;    // shift carry
  }

  cout << "Sum = " << a;
  return 0;
}