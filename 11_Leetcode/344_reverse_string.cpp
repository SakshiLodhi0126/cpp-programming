#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void reverseString(vector<char> &s) { reverse(s.begin(), s.end()); }
};

int main() {

  Solution obj;
  int n;

  cout << "Enter number of characters: ";
  cin >> n;

  vector<char> s(n);

  cout << "Enter characters: ";
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  obj.reverseString(s);

  cout << "Reversed string: ";
  for (char c : s) {
    cout << c << " ";
  }

  return 0;
}