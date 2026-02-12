#include <iostream>
using namespace std;
int main() {
  int a, b;      // Input numbers
  cin >> a >> b; // Read values
  int ans = 1;   // Stores GCD (default 1)
  // Loop till minimum of a and b
  for (int i = 1; i <= min(a, b); i++) {
    // Check common divisor
    if (a % i == 0 && b % i == 0) {
      ans = i; // Update GCD
    }
  }
  cout << ans << endl; // Print GCD
  return 0;            // End program
}
// Large numbers → time complexity increases (O(min(a,b)))
