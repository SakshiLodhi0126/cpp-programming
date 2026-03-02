#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  // Upper part
  for (int i = 1; i <= n; i++) {
    // Spaces
    for (int j = 0; j < n - i; j++) {
      cout << "  ";
    }
    // First number
    cout << i << " ";
    // Middle: * and number
    for (int j = 1; j < i; j++) {
      cout << "* " << i << " ";
    }
    cout << endl;
  }
  // Lower part
  for (int i = n - 1; i >= 1; i--) {
    // Spaces
    for (int j = 0; j < n - i; j++) {
      cout << "  ";
    }
    // First number
    cout << i << " ";
    // Middle: * and number
    for (int j = 1; j < i; j++) {
      cout << "* " << i << " ";
    }
    cout << endl;
  }
  return 0;
}
