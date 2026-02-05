#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter an odd number: ";
  cin >> n;
  int mid = n / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // TOP PART
      if (i < mid) {
        if (j == 0 || j == mid || (i == 0 && j > mid))
          cout << "*";
        else
          cout << " ";
      }
      // MIDDLE ROW
      else if (i == mid) {
        cout << "*";
      }
      // BOTTOM PART
      else {
        if (j == n - 1 || j == mid || (i == n - 1 && j < mid))
          cout << "*";
        else
          cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
