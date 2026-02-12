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
