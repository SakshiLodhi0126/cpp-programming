#include <iostream>
using namespace std;

class Solution {
public:
  int theMaximumAchievableX(int num, int t) { return num + 2 * t; }
};

int main() {
  Solution obj;

  int num, t;
  cout << "Enter num: ";
  cin >> num;

  cout << "Enter t: ";
  cin >> t;

  int result = obj.theMaximumAchievableX(num, t);

  cout << "Maximum Achievable X = " << result << endl;

  return 0;
}