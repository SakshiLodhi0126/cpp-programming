#include <iostream>
using namespace std;

class Solution {
public:
  int subtractProductAndSum(int n) {
    int sum = 0;
    int product = 1;

    while (n > 0) {
      int digit = n % 10;
      sum += digit;
      product *= digit;
      n /= 10;
    }

    return product - sum;
  }
};

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  Solution obj;
  int result = obj.subtractProductAndSum(n);

  cout << "Result: " << result << endl;

  return 0;
}