#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter parenthesis string: ";
    cin >> s;

    string result = "";
    int count = 0;

    for (char c : s) {
        if (c == '(') {
            if (count > 0) {
                result += c;
            }
            count++;
        } else {
            count--;
            if (count > 0) {
                result += c;
            }
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}