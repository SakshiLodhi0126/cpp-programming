#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  cout << endl;
  // Upper part
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i * 2; j++) {
      cout << "  ";
    }
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  // Lower part
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j < i * 2; j++) {
      cout << "  ";
    }
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
