#include <iostream>
using namespace std;
int main() {
  string sentence;
  cin >> sentence;
  for (char ch = 'a'; ch <= 'z'; ch++) {
    bool found = false;
    for (int i = 0; i < sentence.length(); i++) {
      if (sentence[i] == ch) {
        found = true;
        break;
      }
    }
    if (found == false) {
      cout << "false";
      return 0;
    }
  }
  cout << "true";
  return 0;
}