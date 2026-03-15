#include <climits> // For INT_MIN
#include <iostream>

using namespace std;

// Function to find the maximum column sum
int getMaxColSum(int mat[][3], int rows, int cols) {
  int maxColSum = INT_MIN;

  for (int j = 0; j < cols; j++) // Loop for columns
  {
    int colSum = 0;

    for (int i = 0; i < rows; i++) // Loop for rows
    {
      colSum += mat[i][j]; // Add elements of each column
    }

    // Update maximum column sum
    maxColSum = max(maxColSum, colSum);
  }

  return maxColSum;
}

int main() {
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int rows = 3;
  int cols = 3;

  cout << "Maximum Column Sum = " << getMaxColSum(matrix, rows, cols) << endl;

  return 0;
}