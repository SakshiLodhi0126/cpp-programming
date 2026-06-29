#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Function to convert Roman numeral to Integer
int romanToInt(string s) {
    // Map to store the integer values of Roman numerals
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    int total = 0;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        // If the current value is less than the next value, subtract it
        if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
            total -= roman[s[i]];
        } 
        // Otherwise, add it
        else {
            total += roman[s[i]];
        }
    }
    
    return total;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cout << "Enter a Roman numeral (e.g., LVIII, MCMXCIV): ";
    cin >> input;

    int result = romanToInt(input);
    cout << "The integer value is: " << result << endl;

    return 0;
}