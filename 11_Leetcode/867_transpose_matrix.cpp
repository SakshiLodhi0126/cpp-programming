#include <iostream>
using namespace std;

int main() {

  int m, n;
  cin >> m >> n;

  int arr[10][10];

  // input matrix
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  cout << "Transpose Matrix:" << endl;

  // transpose logic
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < m; i++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}