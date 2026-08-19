#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Helper function to find the length of a palindrome expanding from a center
int expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    // Return the length of the palindrome found
    return right - left - 1;
}

// Main function to find the longest palindromic substring
string longestPalindrome(string s) {
    if (s.length() < 2) {
        return s;
    }

    int start = 0, maxLength = 0;

    for (int i = 0; i < s.length(); i++) {
        // Expand for odd-length palindromes (single character center, e.g., "aba")
        int len1 = expandAroundCenter(s, i, i);
        
        // Expand for even-length palindromes (two character center, e.g., "abba")
        int len2 = expandAroundCenter(s, i, i + 1);
        
        int currentMax = max(len1, len2);
        
        // If a longer palindrome is found, update the starting point and max length
        if (currentMax > maxLength) {
            maxLength = currentMax;
            start = i - (currentMax - 1) / 2;
        }
    }

    return s.substr(start, maxLength);
}

int main() {
    string s;
    
    // Take user input
    cout << "Enter a string: ";
    cin >> s;
    
    // Compute and print the result
    string result = longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;
    
    return 0;
}