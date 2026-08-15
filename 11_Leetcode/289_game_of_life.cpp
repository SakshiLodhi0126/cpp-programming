#include <iostream>
#include <vector>

using namespace std;

// Function to compute the next generation of the Game of Life board in-place
void gameOfLife(vector<vector<int>>& board) {
    if (board.empty()) return;
    
    int m = board.size();
    int n = board[0].size();
    
    // Directions to easily check all 8 neighbors (horizontal, vertical, diagonal)
    int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    
    // Pass 1: Count neighbors and apply transition states
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int liveNeighbors = 0;
            
            // Check all 8 directions
            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                
                // A cell was originally live if it is currently 1 (live) or 3 (was live, stays live)
                if (ni >= 0 && ni < m && nj >= 0 && nj < n && (board[ni][nj] == 1 || board[ni][nj] == 3)) {
                    liveNeighbors++;
                }
            }
            
            // Rule 2: Live cell with 2 or 3 neighbors lives on
            if (board[i][j] == 1 && (liveNeighbors == 2 || liveNeighbors == 3)) {
                board[i][j] = 3; // 3 means: was live, stays live
            }
            // Rule 4: Dead cell with exactly 3 neighbors becomes a live cell
            else if (board[i][j] == 0 && liveNeighbors == 3) {
                board[i][j] = 2; // 2 means: was dead, becomes live
            }
            // Note: If a live cell dies, we leave it as 1 for now. It will become 0 in pass 2.
        }
    }
    
    // Pass 2: Finalize the states for the next generation
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // If the state is 2 or 3, it is alive in the next generation
            if (board[i][j] == 2 || board[i][j] == 3) {
                board[i][j] = 1;
            } else {
                // Otherwise (was 0 and stays 0, or was 1 and died), it is dead
                board[i][j] = 0;
            }
        }
    }
}

// Helper function to print the board to the console
void printBoard(const vector<vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    cout << "----------------" << endl;
}

int main() {
    // Example test case 1 from LeetCode
    vector<vector<int>> board = {
        {0, 1, 0},
        {0, 0, 1},
        {1, 1, 1},
        {0, 0, 0}
    };
    
    cout << "Initial Board:" << endl;
    printBoard(board);
    
    // Calculate the next state
    gameOfLife(board);
    
    cout << "Next Generation:" << endl;
    printBoard(board);

    return 0;
}