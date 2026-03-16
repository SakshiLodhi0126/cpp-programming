#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  string reverseWords(string s) {
    vector<string> words;
    string temp = "";

    for (char c : s) {
      if (c != ' ') {
        temp += c;
      } else if (!temp.empty()) {
        words.push_back(temp);
        temp = "";
      }
    }

    if (!temp.empty())
      words.push_back(temp);

    string result = "";

    for (int i = words.size() - 1; i >= 0; i--) {
      result += words[i];
      if (i != 0)
        result += " ";
    }

    return result;
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