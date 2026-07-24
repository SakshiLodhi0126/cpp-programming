#include <iostream>
#include <string>

using namespace std;

// Function to find the first occurrence of needle in haystack
int findSubStringIndex(const string& haystack, const string& needle) {
    int n = haystack.length();
    int m = needle.length();

    // If needle is longer than haystack, it can't exist inside it
    if (n < m) {
        return -1;
    }

    // Check every possible starting position
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        // If we matched the entire needle, return the starting index
        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    string haystack, needle;

    cout << "Enter the haystack string: ";
    cin >> haystack;

    cout << "Enter the needle string: ";
    cin >> needle;

    int index = findSubStringIndex(haystack, needle);

    if (index != -1) {
        cout << "First occurrence found at index: " << index << endl;
    } else {
        cout << "Needle not found (-1)" << endl;
    }

    return 0;
}