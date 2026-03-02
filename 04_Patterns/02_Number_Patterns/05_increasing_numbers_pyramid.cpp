#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    // spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << "  ";
    }
    // numbers
    for (int j = 1; j <= 2 * i + 1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
