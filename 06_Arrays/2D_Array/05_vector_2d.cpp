#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> arr;
  // 1D vector declaration (currently empty)

  int n, m;
  cin >> n >> m;
  // Input number of rows (n) and columns (m)

  vector<vector<int>> a(n, vector<int>(m));
  // Creates a 2D vector with n rows and m columns
  // Each row is a vector containing m integers

  return 0;
}