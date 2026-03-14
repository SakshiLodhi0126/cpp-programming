#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {

    if (s.length() != t.length())
      return false;

    vector<int> count(26, 0);

    for (char c : s)
      count[c - 'a']++;

    for (char c : t)
      count[c - 'a']--;

    for (int i = 0; i < 26; i++) {
      if (count[i] != 0)
        return false;
    }

    return true;
  }
};

int main() {

  Solution obj;

  string s, t;

  cout << "Enter first string: ";
  cin >> s;

  cout << "Enter second string: ";
  cin >> t;

  if (obj.isAnagram(s, t))
    cout << "True (Anagram)" << endl;
  else
    cout << "False (Not Anagram)" << endl;

  return 0;
}