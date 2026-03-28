#include <iostream>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s;

  vector<int> freq(26, 0);

  for (char ch : s) {
    freq[ch - 'a']++;
  }

  for (int i = 0; i < s.length(); i++) {
    if (freq[s[i] - 'a'] == 1) {
      cout << i;
      return 0;
    }
  }

  cout << -1;
  return 0;
}