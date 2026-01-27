#include <iostream>
using namespace std;
int main() {
  int m;
  cout << "Enter the number: ";
  cin >> m;
  int n = m / 2;
  // Upper half
  for (int i = 0; i <= n; i++) {
    // leading spaces
    for (int j = 0; j < n - i; j++)
      cout << " ";
    // first star
    cout << "*";
    // inner spaces and second star
    if (i > 0) {
      for (int j = 0; j < 2 * i - 1; j++)
        cout << " ";
      cout << "*";
    }
    cout << endl;
  }
  // Lower half
  for (int i = n - 1; i >= 0; i--) {
    // leading spaces
    for (int j = 0; j < n - i; j++)
      cout << " ";
    // first star
    cout << "*";
    // inner spaces and second star
    if (i > 0) {
      for (int j = 0; j < 2 * i - 1; j++)
        cout << " ";
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
