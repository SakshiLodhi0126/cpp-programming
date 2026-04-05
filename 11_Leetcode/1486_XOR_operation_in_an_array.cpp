#include <iostream>
using namespace std;

class Solution {
public:
  int xorOperation(int n, int start) {
    int result = 0;

    for (int i = 0; i < n; i++) {
      result ^= (start + 2 * i);
    }

    return result;
  }
};

int main() {
  int n, start;

  cout << "Enter n: ";
  cin >> n;

  cout << "Enter start: ";
  cin >> start;

  Solution obj;
  int answer = obj.xorOperation(n, start);

  cout << "Result: " << answer << endl;

  return 0;
}