#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  string smallestSubsequence(string s) {
    vector<int> last(26);
    vector<bool> visited(26, false);

    // Store last occurrence of each character
    for (int i = 0; i < s.size(); i++) {
      last[s[i] - 'a'] = i;
    }

    string result = "";

    for (int i = 0; i < s.size(); i++) {
      char c = s[i];

      // Skip if already included
      if (visited[c - 'a'])
        continue;

      // Maintain lexicographically smallest order
      while (!result.empty() && result.back() > c &&
             last[result.back() - 'a'] > i) {

        visited[result.back() - 'a'] = false;
        result.pop_back();
      }

      result.push_back(c);
      visited[c - 'a'] = true;
    }

    return result;
  }
};

int main() {
  Solution obj;

  string s;
  cout << "Enter string: ";
  cin >> s;

  string ans = obj.smallestSubsequence(s);

  cout << "Smallest Subsequence: " << ans << endl;

  return 0;
}