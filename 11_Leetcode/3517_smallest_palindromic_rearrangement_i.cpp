#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    // Count character frequencies
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    int n = s.length();
    string result(n, ' ');
    int left = 0;
    int right = n - 1;

    // Fill characters from 'a' to 'z' greedily
    for (int i = 0; i < 26; i++) {
        // Place character pairs at mirror positions
        while (freq[i] >= 2) {
            result[left++] = 'a' + i;
            result[right--] = 'a' + i;
            freq[i] -= 2;
        }
        // Place the remaining odd character in the middle
        if (freq[i] == 1) {
            result[n / 2] = 'a' + i;
            freq[i]--;
        }
    }

    cout << result << "\n";

    return 0;
}