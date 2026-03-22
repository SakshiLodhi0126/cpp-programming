#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cout << "Enter string: ";
  cin >> s;

  int maximum = -1;
  int secondMaximum = -1;

  for (int i = 0; i < s.length(); i++) {

    // check if character is digit
    if (s[i] >= '0' && s[i] <= '9') {

      int num = s[i] - '0';

      if (num > maximum) {
        secondMaximum = maximum;
        maximum = num;
      } else if (num > secondMaximum && num != maximum) {
        secondMaximum = num;
      }
    }
  }

  cout << "Second largest digit: " << secondMaximum;

  return 0;
}