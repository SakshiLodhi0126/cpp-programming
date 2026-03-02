#include <iostream>
// For __gcd() function
#include <algorithm>
// For INT_MAX and INT_MIN
#include <climits>

using namespace std;

int main() {
  int c = INT_MAX; // Maximum possible integer (+infinity)
  int d = INT_MIN; // Minimum possible integer (−infinity)

  int a = 5;
  int b = 10;

  cout << __gcd(a, b); // Built-in function to find GCD
  return 0;            // End program
}

/* In the C++ Standard Template Library (STL), GCD refers to built-in functions
  used to calculate the Greatest Common Divisor of two integers. The GCD is the
  largest positive integer that divides both numbers without leaving a
  remainder. */
