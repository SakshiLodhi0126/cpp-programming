#include <iostream>
using namespace std;

class Solution {
public:
  int differenceOfSums(int n, int m) {
    int totalSum = n * (n + 1) / 2;

    int count = n / m;
    int divisibleSum = m * (count * (count + 1) / 2);

    return totalSum - 2 * divisibleSum;
  }
};

int main() {
  int n, m;
  cin >> n >> m;

  Solution obj;
  cout << obj.differenceOfSums(n, m) << endl;

  return 0;
}