#include <cmath>
#include <iostream>

using namespace std;
int main() {
  int n;
  cin >> n;
  int g = 0;
  int sum = 0;
  while (n > 0) {
    int k = n % 10;
    sum += k * pow(2, g);
    g++;
    n = n / 10;
  }
  cout << sum << endl;

  return 0;
}

/* Binary to decimal conversion involves multiplying each binary digit (0 or 1)
by 2 raised to the power of its position (starting from 2^0 on the right) and
summing the results. The easiest way to code this is using a loop to extract
digits using modulo (%10) and updating the sum with 2^position. */