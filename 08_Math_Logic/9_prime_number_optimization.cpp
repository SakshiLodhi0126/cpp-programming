#include <cmath> // Required for sqrt()
#include <iostream>

using namespace std;

int main() {
  int limit;
  cout << "Enter upper limit: ";
  cin >> limit;

  for (int i = 2; i <= limit; i++) {
    bool isPrime = true;
    for (int j = 2; j * j <= i; j++) { // Using j*j <= i is faster than sqrt(i)
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime)
      cout << i << " ";
  }
  return 0;
}
