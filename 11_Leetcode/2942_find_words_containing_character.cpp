#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<int> findWordsContaining(vector<string> &words, char x) {
    vector<int> result;

    for (int i = 0; i < words.size(); i++) {
      for (char ch : words[i]) {
        if (ch == x) {
          result.push_back(i);
          break;
        }
      }
    }

    return result;
  }
};

int main() {
  int n;
  cout << "Enter number of words: ";
  cin >> n;

  vector<string> words(n);
  cout << "Enter the words:\n";
  for (int i = 0; i < n; i++) {
    cin >> words[i];
  }

  char x;
  cout << "Enter the character to search: ";
  cin >> x;

  Solution obj;
  vector<int> result = obj.findWordsContaining(words, x);

  cout << "Indices of words containing '" << x << "': ";
  for (int index : result) {
    cout << index << " ";
  }

  return 0;
}