#include <iostream>
using namespace std;

int main() {

  // 1D array initialization
  int arr[5] = {1, 2, 3, 4, 5};

  // 2D matrix initialization (4 rows, 3 columns)
  int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  int rows = 4;
  int cols = 3;

  // Update element at row 2, column 1
  matrix[2][1] = 18;

  // Print updated element
  cout << matrix[2][1];

  return 0;
}