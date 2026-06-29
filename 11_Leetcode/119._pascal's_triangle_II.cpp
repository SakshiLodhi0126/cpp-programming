#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Initialize the row with 1s, sized to accommodate rowIndex + 1 elements
        vector<int> row(rowIndex + 1, 1);
        
        // Loop through each row up to rowIndex
        for (int i = 2; i <= rowIndex; ++i) {
            // Update from right to left to prevent overwriting active values
            for (int j = i - 1; j > 0; --j) {
                row[j] = row[j] + row[j - 1];
            }
        }
        
        return row;
    }
};

int main() {
    Solution solution;
    int rowIndex;

    cout << "Enter the row index (0-indexed): ";
    if (cin >> rowIndex) {
        if (rowIndex < 0) {
            cout << "Please enter a non-negative integer." << endl;
            return 1;
        }

        vector<int> result = solution.getRow(rowIndex);

        // Print the resulting Pascal's Triangle row
        cout << "Row " << rowIndex << ": [";
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}