#include <iostream>
#include <string>

using namespace std;

int numDecodings(string s) {
    // A string starting with '0' cannot be decoded
    if (s.empty() || s[0] == '0') {
        return 0;
    }

    int n = s.length();
    
    // prev2 stores ways for s[0...i-2], prev1 stores ways for s[0...i-1]
    int prev2 = 1; // Base case for empty prefix
    int prev1 = 1; // Base case for first character

    for (int i = 1; i < n; i++) {
        int current = 0;

        // 1-digit decode (must be '1'-'9')
        if (s[i] != '0') {
            current += prev1;
        }

        // 2-digit decode (must be "10"-"19" or "20"-"26")
        int twoDigit = (s[i - 1] - '0') * 10 + (s[i] - '0');
        if (twoDigit >= 10 && twoDigit <= 26) {
            current += prev2;
        }

        // Shift state forward
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    string s;

    cout << "Enter encoded string: ";
    cin >> s;

    int ways = numDecodings(s);

    cout << "Number of ways to decode: " << ways << endl;

    return 0;
}