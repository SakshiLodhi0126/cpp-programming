#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m, n, k;
    
    // Take dimensions and shift count as input
    cout << "Enter number of rows (m), columns (n), and shifts (k): ";
    if (!(cin >> m >> n >> k)) return 0;

    // Read the original grid
    vector<vector<int>> grid(m, vector<int>(n));
    cout << "Enter the grid elements row by row:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    int total = m * n;
    
    // Effective shifts needed
    k = k % total;

    // Create result grid
    vector<vector<int>> res(m, vector<int>(n));

    // Calculate new position for each element
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int old_idx = i * n + j;
            int new_idx = (old_idx + k) % total;
            
            int new_i = new_idx / n;
            int new_j = new_idx % n;
            
            res[new_i][new_j] = grid[i][j];
        }
    }

    // Print the shifted grid
    cout << "\nShifted Grid:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}