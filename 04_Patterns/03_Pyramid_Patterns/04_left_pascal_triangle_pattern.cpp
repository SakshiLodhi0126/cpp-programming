#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  // Upper part
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  // Lower part
  for (int i = n - 2; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
