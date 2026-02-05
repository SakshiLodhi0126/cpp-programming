#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter an odd number: ";
  cin >> n;
  int mid = n / 2; // middle row and column index
  // loop for rows
  for (int i = 0; i < n; i++) {
    // loop for columns
    for (int j = 0; j < n; j++) {
      // middle row OR middle column
      if (i == mid || j == mid)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl; // move to next line
  }
  return 0;
}
