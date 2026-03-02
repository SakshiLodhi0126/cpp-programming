#include <iostream>
using namespace std;
int binToDecimal(int binNum) {
  int ans = 0;
  int pow = 1;
  while (binNum > 0) {
    int rem = binNum % 10;
    binNum /= 10;
    ans += (rem * pow);
    pow *= 2;
  }
  return ans; // decimal form
}
int main() {
  for (int i = 25; i <= 30; i++) {
    cout << binToDecimal(i) << endl;
  }
  return 0;
}