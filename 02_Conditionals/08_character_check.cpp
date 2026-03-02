#include <iostream>
using namespace std;

// Check alphabet/digit/special
int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;

  if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    cout << "Alphabet";
  else if (ch >= '0' && ch <= '9')
    cout << "Digit";
  else
    cout << "Special Character";

  return 0;
}