#include <iostream>
using namespace std;

int main() {

  // 2D array initialization
  int array[][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  // Calculate number of rows and columns
  int row = sizeof(array) / sizeof(array[0]);
  int col = sizeof(array[0]) / sizeof(int);

  cout << row << endl;
  cout << col << endl;

  // Different ways of declaring 2D arrays
  int b[2][3];                               // Declaration
  int c[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Initialization
  int d[3][4] = {};                          // All elements initialized to 0

  int n, m;
  cin >> n >> m;

  // User input matrix
  int e[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> e[i][j];
    }
  }

  // Traversing / printing the array
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}