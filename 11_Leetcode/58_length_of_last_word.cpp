#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  int lengthOfLastWord(string s) {
    int length = 0;
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') {
      i--;
    }

    while (i >= 0 && s[i] != ' ') {
      length++;
      i--;
    }

    return length;
  }
};

int main() {

  string s;
  cout << "Enter a sentence: ";
  getline(cin, s);

  Solution obj;

  cout << "Length of last word: " << obj.lengthOfLastWord(s);

  return 0;
}