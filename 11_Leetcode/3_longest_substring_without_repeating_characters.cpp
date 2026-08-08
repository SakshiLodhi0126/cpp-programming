#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the length of the longest substring without repeating characters
int lengthOfLongestSubstring(string s) {
    // Array to store the last seen index of standard ASCII characters (initialized to -1)
    vector<int> last_seen(128, -1);
    
    int max_len = 0;
    int left = 0;
    
    for (int right = 0; right < s.length(); ++right) {
        char current_char = s[right];
        
        // If the character was seen inside the current window, shift 'left' pointer
        if (last_seen[current_char] >= left) {
            left = last_seen[current_char] + 1;
        }
        
        // Update the character's last seen position
        last_seen[current_char] = right;
        
        // Update max length found so far
        max_len = max(max_len, right - left + 1);
    }
    
    return max_len;
}

int main() {
    string input_str;
    
    cout << "Enter a string: ";
    // Use getline to allow inputs containing spaces
    getline(cin, input_str);
    
    int result = lengthOfLongestSubstring(input_str);
    
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    
    return 0;
}