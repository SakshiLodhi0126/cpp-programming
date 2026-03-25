#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore(); // important

  vector<string> sentences(n);

  for (int i = 0; i < n; i++) {
    getline(cin, sentences[i]);
  }

  int maxi = 0;

  for (int i = 0; i < n; i++) {
    int count = 1;

    for (char ch : sentences[i]) {
      if (ch == ' ')
        count++;
    }

    maxi = max(maxi, count);
  }

  cout << maxi;

  return 0;
}