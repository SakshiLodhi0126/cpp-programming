#include <iostream>
using namespace std;
int digitSum(int n) {
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
bool prime(int n) {
  if (n <= 1)
    return false; // added this to handle 1 and 0
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  int original = n; // preserve original number
  int sum = digitSum(n);
  int factor = 0;
  for (int i = 2; i <= original; i++) {
    if (prime(i)) {
      int temp = n; // use temp to avoid modifying n
      while (temp % i == 0) {
        factor += digitSum(i);
        temp /= i;
      }
    }
  }
  cout << sum << endl;
  cout << factor << endl;
  return 0;
}
