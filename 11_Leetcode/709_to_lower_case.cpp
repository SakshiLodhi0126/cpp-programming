#include <iostream>
#include <string>
using namespace std;
string toLowerCase(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
    }
  }
  return s;
}
int main() {
  string s;
  getline(cin, s); // to take full input (with spaces)
  cout << toLowerCase(s);
  return 0;
}