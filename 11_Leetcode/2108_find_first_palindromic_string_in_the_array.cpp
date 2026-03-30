#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s) {
  int start = 0;
  int end = s.length() - 1;

  while (start < end) {
    if (s[start] != s[end]) {
      return false;
    }
    start++;
    end--;
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  vector<string> words(n);

  for (int i = 0; i < n; i++) {
    cin >> words[i]; 
  }

  for (int i = 0; i < n; i++) {
    if (isPalindrome(words[i])) {
      cout << words[i];
      return 0;
    }
  }

  cout << "";
  return 0;
}