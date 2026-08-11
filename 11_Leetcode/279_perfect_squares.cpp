#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// Function to find the least number of perfect square numbers that sum to n
int numSquares(int n) {
    // dp[i] stores the minimum number of perfect squares that sum up to i
    vector<int> dp(n + 1, INT_MAX);
    
    // Base case: 0 requires 0 squares
    dp[0] = 0;
    
    // Build up solutions from 1 to n
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    
    return dp[n];
}

int main() {
    int n;
    
    cout << "Enter a number (n): ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }
    
    int result = numSquares(n);
    cout << "Least number of perfect squares: " << result << endl;
    
    return 0;
}