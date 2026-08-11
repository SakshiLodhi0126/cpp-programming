#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int numRows;

    // Get input from user
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    // Base Case: If only 1 row or string length is less than or equal to rows, no zigzag needed
    if (numRows <= 1 || numRows >= s.length()) {
        cout << "Converted string: " << s << endl;
        return 0;
    }

    // Create string buckets for each row
    vector<string> rows(min((int)s.length(), numRows));
    int currentRow = 0;
    bool goingDown = false;

    // Place each character in its respective row
    for (char c : s) {
        rows[currentRow] += c;

        // Change direction when reaching top (0) or bottom (numRows - 1) row
        if (currentRow == 0 || currentRow == numRows - 1) {
            goingDown = !goingDown;
        }

        // Move up or down
        if (goingDown) {
            currentRow++;
        } else {
            currentRow--;
        }
    }

    // Combine all row strings together
    string result = "";
    for (string row : rows) {
        result += row;
    }

    cout << "Converted string: " << result << endl;

    return 0;
}