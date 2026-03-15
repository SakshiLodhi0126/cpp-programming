#include <iostream>
using namespace std;

// Function to search key in matrix
void linearSearch(int matrix[10][10], int rows, int cols, int key) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] == key) {
        cout << "Key found at position: " << i << " " << j;
        return;
      }
    }
  }
  cout << "Key not found";
}

int main() {

  int rows, cols, key;
  int matrix[rows][cols];

  cout << "Enter rows and columns: ";
  cin >> rows >> cols;

  // Input matrix
  cout << "Enter matrix elements:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> matrix[i][j];
    }
  }

  cout << "Enter key to search: ";
  cin >> key;

  // Function call
  linearSearch(matrix, rows, cols, key);

  return 0;
}