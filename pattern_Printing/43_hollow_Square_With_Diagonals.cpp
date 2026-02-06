#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter size: ";
  cin >> n;
  // loop for rows
  for (int i = 0; i < n; i++) {
    // loop for columns
    for (int j = 0; j < n; j++) {
      // border OR diagonals
      if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || i == j ||
          i + j == n - 1)
        cout << "*";
      else
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
