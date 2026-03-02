#include <iostream>
using namespace std;
int main() {
  int n1, n2;
  cout << "Enter the values of n1 and n2: ";
  cin >> n1 >> n2;
  int j = 1;
  for (int i = 1; i <= n1;) {
    int c = 3 * j + 2;
    if (c % n2 != 0) {
      cout << " " << c;
      j++;
      i++;
    } else {
      j++;
    }
  }
  cout << endl;
}