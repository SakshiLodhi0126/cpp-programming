#include <iostream>
using namespace std;

// Function using Euclidean Algorithm
int gcd(int a, int b) {
  while (b != 0) { // Repeat until remainder becomes 0
    int t = a % b; // Store remainder
    a = b;         // Update a
    b = t;         // Update b
  }
  return a; // a holds GCD
}

int main() {
  int a, b;
  cin >> a >> b; // Input numbers

  // Normal (inline) Euclidean approach
  while (b != 0) {
    int t = a % b;
    a = b;
    b = t;
  }

  cout << a << endl; // GCD using normal approach
  cout << gcd(a, b); // Function call (now b = 0)

  return 0;
}
