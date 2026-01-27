#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int num = 1;
  for (int i = 0; i < n; i++) {
    // spaces
    for (int j = 0; j < n - i - 1; j++) {
      cout << "\t";
    }
    // numbers
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << num << "\t";
      num++;
    }
    cout << endl;
  }
  return 0;
}
