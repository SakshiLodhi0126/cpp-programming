#include <iostream>
#include <string>

using namespace std;

// Function to generate the n-th "Count and Say" term
string countAndSay(int n) {
    if (n == 1) return "1";

    string current = "1";

    for (int i = 2; i <= n; ++i) {
        string next = "";
        int count = 1;

        for (int j = 0; j < current.length(); ++j) {
            // Check if the next character is the same
            if (j + 1 < current.length() && current[j] == current[j + 1]) {
                count++;
            } else {
                // Append the count and the character to the string
                next += to_string(count);
                next += current[j];
                count = 1; // Reset count for the next digit group
            }
        }

        current = next; // Update current string for the next turn
    }

    return current;
}

int main() {
    int n;
    
    // User Input
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    // Function call and Output
    string result = countAndSay(n);
    cout << "Result for n = " << n << " is: " << result << endl;

    return 0;
}