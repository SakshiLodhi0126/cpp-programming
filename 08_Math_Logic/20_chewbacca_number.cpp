#include <iostream>
using namespace std;
int main() {
  long long n;
  cin >> n;
  long long original = n;
  long long inverse = 0;
  long long place = 1;
  while (n != 0) {
    int digit = n % 10;
    int newDigit;
    if (digit == 9 && n / 10 == 0) {
      newDigit = 9;
    } else {
      newDigit = min(digit, 9 - digit);
    }
    inverse = newDigit * place + inverse;
    place *= 10;
    n /= 10;
  }
  cout << inverse;
  return 0;
}

/* Chewbacca and Number (often found on Codeforces 514A) is a programming
problem that asks to transform a large integer ( ) into the minimum possible
positive number by inverting its digits, with specific constraints. */