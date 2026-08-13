#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Helper function for backtracking
void findIPs(string s, int index, int dots, string current, vector<string>& result) {
    // Base case: 4 valid parts formed and full string consumed
    if (dots == 4 && index == s.length()) {
        current.pop_back(); // Remove trailing dot
        result.push_back(current);
        return;
    }

    // Stop if 4 parts created or end of string reached
    if (dots == 4 || index == s.length()) {
        return;
    }

    // Try segment lengths of 1, 2, and 3
    for (int len = 1; len <= 3 && index + len <= s.length(); ++len) {
        string segment = s.substr(index, len);

        // Leading zeros invalid for lengths > 1 (e.g., "01", "001")
        if (segment.length() > 1 && segment[0] == '0') {
            break;
        }

        // Value constraint check (0 - 255)
        int value = stoi(segment);
        if (value <= 255) {
            findIPs(s, index + len, dots + 1, current + segment + ".", result);
        }
    }
}

int main() {
    string s;
    cout << "Enter the digit string: ";
    cin >> s;

    vector<string> result;

    // Pruning: Valid IP strings must be between 4 and 12 characters long
    if (s.length() >= 4 && s.length() <= 12) {
        findIPs(s, 0, 0, "", result);
    }

    // Output results
    cout << "\nValid IP Addresses:" << endl;
    if (result.empty()) {
        cout << "None" << endl;
    } else {
        for (string ip : result) {
            cout << ip << endl;
        }
    }

    return 0;
}