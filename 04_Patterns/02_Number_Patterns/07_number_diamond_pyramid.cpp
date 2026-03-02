#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    // Spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << "\t";
    }
    // Increasing part
    for (int j = 0; j <= i; j++) {
      cout << (i + j + 1) << "\t";
    }
    // Decreasing part
    for (int j = i - 1; j >= 0; j--) {
      cout << (i + j + 1) << "\t";
    }
    cout << endl;
  }
  return 0;
}
