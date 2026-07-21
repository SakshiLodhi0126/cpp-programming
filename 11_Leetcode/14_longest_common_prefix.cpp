#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to find the longest common prefix
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    // Take the first string as reference
    for (int i = 0; i < strs[0].length(); i++) {
        char c = strs[0][i];
        
        // Compare this character with all other strings
        for (int j = 1; j < strs.size(); j++) {
            // If we reach the end of any string or characters don't match
            if (i >= strs[j].length() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }
    
    return strs[0];
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid number of strings." << endl;
        return 0;
    }

    vector<string> strs(n);
    cout << "Enter " << n << " strings separated by space or newline:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string prefix = longestCommonPrefix(strs);

    if (prefix.empty()) {
        cout << "\nLongest Common Prefix: \"\" (No common prefix)" << endl;
    } else {
        cout << "\nLongest Common Prefix: \"" << prefix << "\"" << endl;
    }

    return 0;
}