#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Read the triangle elements from standard input
    vector<vector<int>> triangle(n);
    cout << "Enter the elements row by row:\n";
    for (int i = 0; i < n; ++i) {
        triangle[i].resize(i + 1);
        for (int j = 0; j <= i; ++j) {
            cin >> triangle[i][j];
        }
    }

    // dp vector initialized with the last row of the triangle
    vector<int> dp = triangle[n - 1];

    // Bottom-up DP: Start from the second-to-last row and move up
    for (int row = n - 2; row >= 0; --row) {
        for (int col = 0; col <= row; ++col) {
            dp[col] = triangle[row][col] + min(dp[col], dp[col + 1]);
        }
    }

    // Result is stored in dp[0]
    cout << "Minimum path sum: " << dp[0] << endl;

    return 0;
}