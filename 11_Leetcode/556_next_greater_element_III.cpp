#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    if (!(cin >> n)) {
        cout << "-1" << endl;
        return 0;
    }

    // Convert the integer into a string of digits for easy manipulation
    string digits = to_string(n);

    // Find the next lexicographically greater permutation
    if (!next_permutation(digits.begin(), digits.end())) {
        cout << "-1" << endl;
        return 0;
    }

    // Convert back to a number using long long to prevent immediate overflow
    long long result = stoll(digits);

    // Check if the result fits within a valid 32-bit signed integer
    if (result > INT_MAX) {
        cout << "-1" << endl;
    } else {
        cout << "Next greater element: " << result << endl;
    }

    return 0;
}