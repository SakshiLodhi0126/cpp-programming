#include <iostream>
using namespace std;

// Simple calculator
int main() {
  char op;
  int a, b;

  cout << "Enter operator (+,-,*,/): ";
  cin >> op;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  switch (op) {
  case '+':
    cout << a + b;
    break;
  case '-':
    cout << a - b;
    break;
  case '*':
    cout << a * b;
    break;
  case '/':
    cout << a / b;
    break;
  default:
    cout << "Invalid operator";
  }

  return 0;
}