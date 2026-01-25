#include <iostream>
using namespace std;
int main() {
// a program that takes two integer inputs and returns the maximum of the two.
  int a, b;
  cout << "Enter a number: ";
  cin >> a >> b;
  if (a > b) {
    cout << a << " is greater than " << b << "." << endl;
  } else {
    cout << b << " is greater than " << a << "." << endl;
  }
  return 0;
}