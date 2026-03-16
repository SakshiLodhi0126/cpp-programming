#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
  string reverseWords(string s) {

    int start = 0;

    for (int i = 0; i <= s.length(); i++) {

      if (i == s.length() || s[i] == ' ') {
        reverse(s.begin() + start, s.begin() + i);
        start = i + 1;
      }
    }

    return s;
  }
};

int main() {

  string s;
  cout << "Enter sentence: ";
  getline(cin, s);

  Solution obj;

  cout << "Output: " << obj.reverseWords(s);

  return 0;
}