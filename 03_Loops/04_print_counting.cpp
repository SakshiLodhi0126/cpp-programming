#include <iostream>
using namespace std;
int main() {
  // a program that takes an integer input and returns the numbers from 1 to n.
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "The numbers from 1 to " << n << " are: " << endl;
  for (int i = 1; i <= n; i++) {
    cout << i << endl;
  }
  return 0;
}