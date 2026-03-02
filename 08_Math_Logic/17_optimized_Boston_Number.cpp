#include <iostream>
using namespace std;
// Function to calculate sum of digits of a number
int digitSum(long long n) {
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main() {
  long long n;
  cin >> n;
  long long original = n;
  int originalSum = digitSum(n); // Sum of digits of the original number
  int factorDigitSum = 0;
  // Factorize n using primes up to sqrt(n)
  for (long long i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      factorDigitSum += digitSum(i);
      n /= i;
    }
  }
  // If n > 1, it is a prime factor itself
  if (n > 1) {
    factorDigitSum += digitSum(n);
  }
  // Check if Boston number
  if (factorDigitSum == originalSum) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
