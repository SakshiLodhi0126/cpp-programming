#include <cctype>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

      while (left < right && !isalnum(s[left])) {
        left++;
      }

      while (left < right && !isalnum(s[right])) {
        right--;
      }

      if (tolower(s[left]) != tolower(s[right])) {
        return false;
      }

      left++;
      right--;
    }

    return true;
  }
};

int main() {
  string s;

  cout << "Enter a string: ";
  getline(cin, s);

  Solution obj;

  if (obj.isPalindrome(s)) {
    cout << "True (It is a Palindrome)";
  } else {
    cout << "False (Not a Palindrome)";
  }

  return 0;
}