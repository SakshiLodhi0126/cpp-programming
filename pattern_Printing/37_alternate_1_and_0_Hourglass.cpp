#include <iostream>
using namespace std;
int main() {
  int m;
  cout << "Enter a number: ";
  cin >> m;
  int n = m / 2 + 1;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= n - i; j--) {
      cout << " ";
    }
    for (int j = 1; j <= 2 + m - (2 * i); j++) {
      if (j%2==0) {
        cout << "0";
      } else {
        cout << "1";
      }
    }
    cout << endl;
  }
  for (int i = n-1; i >= 1; i--) {
    for (int j = n; j >= n - i; j--) {
      cout << " ";
    }
    for (int j = 1; j <= 2 + m - (2 * i); j++) {
      if (j%2==0) {
        cout << "0";
      } else {
        cout << "1";
      }
    }
    cout << endl;
  }
  return 0;
}