#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int N1, N2;
  cin >> N1 >> N2;
  for (int num = N1; num <= N2; num++) {
    int original = num;
    int n = num;
    int sum = 0;
    // calculate number of digits
    int length = 0;
    int temp = n;
    while (temp != 0) {
      temp /= 10;
      length++;
    }
    sum = 0;
    while (n != 0) {
      int k = n % 10;
      sum += pow(k, length);
      n /= 10;
    }
    if (sum == original) {
      cout << original << endl;
    }
  }
  return 0;
}
