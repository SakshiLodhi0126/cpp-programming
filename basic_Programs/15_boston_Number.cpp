#include <iostream>
using namespace std;
  int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
      int k = n % 10;
      sum + = k;
      n /= 10;
    }
    return sum;
  }
  bool prime(int n) {
    int sum = 0;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }
  int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int factor = 0;
    sum = digitSum(n);
    for (int i = 2; i <= n; i++) {
      while (n != 0) {
        if (prime(i)) {
          factor += digitSum(i);
        }
        n /= i;
      }
    }
    cout << sum << endl;
    cout << factor << endl;
  }
  return 0;
