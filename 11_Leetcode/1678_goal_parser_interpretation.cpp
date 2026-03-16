#include <iostream>
using namespace std;

class Solution {
public:
  string interpret(string command) {
    string result = "";

    for (int i = 0; i < command.length(); i++) {

      if (command[i] == 'G') {
        result += 'G';
      } else if (command[i] == '(' && command[i + 1] == ')') {
        result += 'o';
        i++;
      } else {
        result += "al";
        i += 3;
      }
    }

    return result;
  }
};

int main() {
  string command;
  cout << "Enter command: ";
  cin >> command;

  Solution obj;
  cout << "Output: " << obj.interpret(command);

  return 0;
}