#include <iostream>
using namespace std;
int main() {
//a program that takes the principal amount, rate, and time as inputs and returns the simple interest.
  int p, r, t;
  cout << "Enter the principal amount: ";
  cin >> p;
  cout << "Enter the rate: ";
  cin >> r;
  cout << "Enter the time: ";
  cin >> t;
  int si = (p * r * t) / 100;
  cout << "The simple interest is: " << si << "." << endl;
  return 0;
}