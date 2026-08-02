#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Helper function to check if a character is a vowel (case-insensitive)
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    // Two-pointer approach to reverse vowels in place
    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Move left pointer until a vowel is found
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move right pointer until a vowel is found
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            // Swap the vowels found
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main() {
    string inputStr;
    cout << "Enter a string: ";
    cin >> inputStr;

    Solution solver;
    string result = solver.reverseVowels(inputStr);

    cout << "String with reversed vowels: " << result << endl;

    return 0;
}