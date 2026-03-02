#include <iostream>
using namespace std;

int main() {
  int a, b, count = 0;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  while (a >= b) {
    a = a - b;
    count++;
  }

  cout << "Division = " << count;
  return 0;
}