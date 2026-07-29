#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter string s: ";
    cin >> s;

    // Count frequency of each letter (a-z)
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Sort frequencies in ascending order
    sort(freq.begin(), freq.end());

    int deletions = 0;
    // Check from second highest to lowest frequency
    for (int i = 24; i >= 0; i--) {
        if (freq[i] == 0) break; // no more characters
        
        // If current frequency overlaps with the one above it
        if (freq[i] >= freq[i + 1]) {
            int prev = freq[i];
            freq[i] = max(0, freq[i + 1] - 1);
            deletions += (prev - freq[i]);
        }
    }

    cout << "Minimum deletions: " << deletions << endl;

    return 0;
}
