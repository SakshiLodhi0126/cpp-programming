#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    // Print spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << "  ";
    }
    // Left side (decreasing to 0)
    for (int j = i; j >= 0; j--) {
      cout << (j % 10) << " ";
    }
    // Right side (increasing from 1)
    for (int j = 1; j <= i; j++) {
      cout << (j % 10) << " ";
    }
    cout << endl;
  }
  return 0;
}
