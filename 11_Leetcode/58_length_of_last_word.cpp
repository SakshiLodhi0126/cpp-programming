#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";
    // Use getline to read the complete line including spaces
    getline(cin, s);

    int length = 0;
    int i = s.length() - 1;

    // Step 1: Skip trailing spaces at the end of the string
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: Count characters until reaching a space or start of string
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    cout << "Length of last word: " << length << endl;

    return 0;
}