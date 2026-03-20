#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string removeOccurrences(string s, string part) {
    while (s.find(part) < s.length()) {
      s.erase(s.find(part), part.length());
    }
    return s;
  }
};

int main() {
  string s, part;

  cout << "Enter main string: ";
  getline(cin, s);

  cout << "Enter part to remove: ";
  getline(cin, part);

  Solution obj;
  string result = obj.removeOccurrences(s, part);

  cout << "Final string after removal: " << result << endl;

  return 0;
}