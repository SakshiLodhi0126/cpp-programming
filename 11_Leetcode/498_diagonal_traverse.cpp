#include <bits/stdc++.h>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>> &mat) {
  int m = mat.size();
  int n = mat[0].size();

  vector<int> arr;
  arr.reserve(m * n); // better than fixed size

  int r = 0, c = 0;
  bool up = true;

  while (r < m && c < n) {
    if (up) {
      // move upward
      while (r > 0 && c < n - 1) {
        arr.push_back(mat[r][c]);
        r--;
        c++;
      }
      arr.push_back(mat[r][c]);

      if (c == n - 1)
        r++;
      else
        c++;
    } else {
      // move downward
      while (c > 0 && r < m - 1) {
        arr.push_back(mat[r][c]);
        r++;
        c--;
      }
      arr.push_back(mat[r][c]);

      if (r == m - 1)
        c++;
      else
        r++;
    }

    up = !up;
  }

  return arr;
}

int main() {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> mat(m, vector<int>(n));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> mat[i][j];
    }
  }

  vector<int> result = findDiagonalOrder(mat);

  for (int x : result) {
    cout << x << " ";
  }

  return 0;
}