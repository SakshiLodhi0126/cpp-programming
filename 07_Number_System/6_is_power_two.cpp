#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;

  // number must be > 0 and satisfy condition
  if (n > 0 && (n & (n - 1)) == 0) {
    cout << "It is a power of 2";
  } else {
    cout << "Not a power of 2";
  }

  return 0;
}