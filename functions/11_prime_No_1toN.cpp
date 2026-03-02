#include <iostream>
using namespace std;
// Function to check prime
bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main() {
  int N;
  cout << "Enter a number: ";
  cin >> N;
  cout << "Prime numbers from 1 to " << N << " are: ";
  for (int i = 1; i <= N; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }

  return 0;
}