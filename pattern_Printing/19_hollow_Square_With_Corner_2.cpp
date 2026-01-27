#include <iostream>
using namespace std;
int main() {
  int m;
  cout << "Enter number: ";
  cin >> m;
  int n = m / 2;
  // Upper part
  for (int i = 0; i < n; i++) {
    // Left stars
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    // Middle spaces
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "  ";
    }
    // Right stars
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
  // Lower part
  for (int i = n - 1; i >= 0; i--) {
    // Left stars
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    // Middle spaces
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "  ";
    }
    // Right stars
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
