#include <cmath>
#include <iostream>

using namespace std;

class Solution {
public:
  int scoreOfString(string s) {
    int sum = 0;

    for (int i = 1; i < s.size(); i++) {
      sum += abs(s[i] - s[i - 1]);
    }

    return sum;
  }
};

int main() {

  Solution obj;
  string s;

  cout << "Enter a string: ";
  cin >> s;

  int result = obj.scoreOfString(s);

  cout << "Score of string = " << result << endl;

  return 0;
}