#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  while (b != 0) {
    int borrow = (~a) & b;
    a = a ^ b;
    b = borrow << 1;
  }

  cout << "Subtraction = " << a;
  return 0;
}