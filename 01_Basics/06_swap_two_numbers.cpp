#include <iostream>
using namespace std;

// Swapping two numbers using third variable
int main() {
  int a, b, temp;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  temp = a;
  a = b;
  b = temp;

  cout << "After swapping: " << a << " " << b;
  return 0;
}