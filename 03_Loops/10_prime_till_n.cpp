#include <iostream>
using namespace std;

/* Prime Number: A number is a prime number if it has only two distinct
 divisors: 1 and itself */

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "Prime numbers till " << n << " are: " << endl;
  for (int i = 2; i <= n; i++) {
    int count = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0)
        count++;
    }
    if (count == 2)
      cout << i << " ";
  }
  return 0;
}