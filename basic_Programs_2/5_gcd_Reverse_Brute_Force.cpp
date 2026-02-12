#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  // Start checking from min(a, b) downwards
  for (int i = min(a, b); i >= 1; i--) {
    // Check common divisor
    if (a % i == 0 && b % i == 0) {
      cout << i << endl; // First common divisor is GCD
      break;             // Exit loop
    }
  }
  return 0;
}

/*
If one number is composite and the other is prime,
loop may run till 1 → worst case time complexity O(min(a, b))
*/
