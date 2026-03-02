#include <iostream>
using namespace std;

int main() {
  int a, b, c, result;

  // Taking input from user
  cout << "Enter value of a: ";
  cin >> a;

  cout << "Enter value of b: ";
  cin >> b;

  cout << "Enter value of c: ";
  cin >> c;

  // *, /, % have higher priority than + and -
  // So first b*c will be calculated
  result = a + b * c;

  cout << "\nResult of a + b * c = " << result << endl;

  // Using brackets to change precedence
  // Brackets have highest priority
  result = (a + b) * c;

  cout << "Result of (a + b) * c = " << result << endl;

  // Another example
  // Division and multiplication first, then addition/subtraction
  result = a + b * c - a / c;

  cout << "Result of a + b*c - a/c = " << result << endl;

  // Logical operator precedence
  // && has higher priority than ||
  if (a > b && a > c || b > c) {
    cout << "Condition is TRUE based on precedence" << endl;
  } else {
    cout << "Condition is FALSE" << endl;
  }

  return 0;
}