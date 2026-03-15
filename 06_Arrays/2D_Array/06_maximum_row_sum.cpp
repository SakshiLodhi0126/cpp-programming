#include <climits> // For INT_MIN
#include <iostream>

using namespace std;

// Function to find the maximum row sum
int getMaxSum(int mat[][3], int rows, int cols) {
  int maxRowSum = INT_MIN;

  for (int i = 0; i < rows; i++) {
    int rowSum = 0;

    for (int j = 0; j < cols; j++) {
      rowSum += mat[i][j]; // Add elements of each row
    }

    // Update maximum row sum
    maxRowSum = max(maxRowSum, rowSum);
  }

  return maxRowSum;
}

int main() {
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rows = 3;
  int cols = 3;

  cout << "Maximum Row Sum = " << getMaxSum(matrix, rows, cols) << endl;

  return 0;
}