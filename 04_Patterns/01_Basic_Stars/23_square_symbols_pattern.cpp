#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == n || j == 1 || j == n) {
        cout << "* ";
      } else if (n / 2 + 1 == j && n / 2 + 1 == i) {
        cout << "@ ";
      } else {
        cout << "# ";
      }
    }
    cout << endl;
  }
  return 0;
}