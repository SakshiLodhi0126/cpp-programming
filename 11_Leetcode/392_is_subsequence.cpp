#include <iostream>
#include <string>

using namespace std;

// Standalone function to check if 's' is a subsequence of 't'
bool isSubsequence(string s, string t) {
    int i = 0; // Pointer for string s
    int j = 0; // Pointer for string t
    
    // Traverse through both strings
    while (i < s.length() && j < t.length()) {
        // If characters match, move the pointer for s
        if (s[i] == t[j]) {
            i++;
        }
        // Always move the pointer for t to check the next character
        j++;
    }
    
    // If we matched all characters of s, it is a subsequence
    return i == s.length();
}

int main() {
    string s, t;
    
    // 1. Get the subsequence string (s) from the user
    cout << "Enter the string you want to find (s): ";
    cin >> s;
    
    // 2. Get the main target string (t) from the user
    cout << "Enter the main target string (t): ";
    cin >> t;
    
    // 3. Check if it's a subsequence and print the result
    if (isSubsequence(s, t)) {
        cout << "Result: True ('" << s << "' IS a subsequence of '" << t << "')" << endl;
    } else {
        cout << "Result: False ('" << s << "' is NOT a subsequence of '" << t << "')" << endl;
    }

    return 0;
}