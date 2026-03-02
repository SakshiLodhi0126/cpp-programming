#include <iostream>
using namespace std;

// Function to check monotonic number
int main() {
  int n;
  cin >> n;

  bool increasing = true;
  bool decreasing = true;

  int last = n % 10;
  n = n / 10;

  while (n > 0) {
    int digit = n % 10;

    if (digit < last)
      increasing = false;

    if (digit > last)
      decreasing = false;

    last = digit;
    n = n / 10;
  }

  if (increasing || decreasing)
    cout << "Monotonic Number";
  else
    cout << "Not Monotonic";

  return 0;
}

/* A number is monotonic if its digits are either:
completely increasing (1234, 1129)
completely decreasing (9870, 9441)
If both possible (like 1111) → also monotonic. */