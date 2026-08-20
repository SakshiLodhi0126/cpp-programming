#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<char>>& grid, int r, int c) {
    int nr = grid.size();
    int nc = grid[0].size();

    if (r < 0 || c < 0 || r >= nr || c >= nc || grid[r][c] == '0') {
        return;
    }

    grid[r][c] = '0'; 
    
    dfs(grid, r - 1, c); 
    dfs(grid, r + 1, c); 
    dfs(grid, r, c - 1); 
    dfs(grid, r, c + 1); 
}

int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;
    
    int num_islands = 0;
    for (int r = 0; r < grid.size(); ++r) {
        for (int c = 0; c < grid[0].size(); ++c) {
            if (grid[r][c] == '1') {
                ++num_islands; 
                dfs(grid, r, c); 
            }
        }
    }
    return num_islands;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    vector<vector<char>> grid(m, vector<char>(n));
    cout << "Enter the grid elements ('1' for land, '0' for water):" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    int result = numIslands(grid);
    cout << "Number of islands: " << result << endl;

    return 0;
}