#include <iostream>
#include <vector>

using namespace std;

// Helper function to count how many elements in the matrix are less than or equal to 'mid'
int countLessOrEqual(const vector<vector<int>>& matrix, int mid, int n) {
    int count = 0;
    int r = n - 1; // Start from the bottom-left corner
    int c = 0;

    while (r >= 0 && c < n) {
        if (matrix[r][c] <= mid) {
            // If the current element is <= mid, then all elements above it in the same column are also <= mid
            count += (r + 1);
            c++; // Move to the next column
        } else {
            r--; // Move up to a smaller element
        }
    }
    return count;
}

int kthSmallest(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    int low = matrix[0][0];
    int high = matrix[n - 1][n - 1];
    int ans = low;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If count of elements <= mid is at least k, mid could be a candidate
        if (countLessOrEqual(matrix, mid, n) >= k) {
            ans = mid;
            high = mid - 1; // Try to find a smaller feasible value
        } else {
            low = mid + 1;  // Look in the higher half
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout << "Enter matrix size (n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the matrix elements (row by row, sorted):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int result = kthSmallest(matrix, k);
    cout << "The " << k << "th smallest element is: " << result << endl;

    return 0;
}