#include <iostream>
using namespace std;

// Palindrome: A number is a palindrome if it reads the same backward as forward

int main() {
  int n, rev = 0, rem, temp;
  cin >> n;

  temp = n;

  while (n > 0) {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  if (temp == rev)
    cout << "Palindrome";
  else
    cout << "Not Palindrome";

  return 0;
}