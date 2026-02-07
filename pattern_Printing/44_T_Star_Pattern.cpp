#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter an odd number: ";
  cin >> n;
  int mid = n / 2; // middle column index
  // loop for rows
  for (int i = 0; i < n; i++) {
    // loop for columns
    for (int j = 0; j < n; j++) {
      // first row OR middle column
      if (i == 0 || j == mid)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl; // next row
  }
  return 0;
}
