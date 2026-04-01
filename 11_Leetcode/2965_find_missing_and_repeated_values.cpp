#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter size of grid (n): ";
  cin >> n;

  vector<vector<int>> grid(n, vector<int>(n));

  cout << "Enter elements of grid:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  int total = n * n;
  vector<int> freq(total + 1, 0);

  // Count frequency
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      freq[grid[i][j]]++;
    }
  }

  int repeated = -1, missing = -1;

  // Find repeated and missing
  for (int i = 1; i <= total; i++) {
    if (freq[i] == 2) {
      repeated = i;
    }
    if (freq[i] == 0) {
      missing = i;
    }
  }

  cout << "Repeated: " << repeated << endl;
  cout << "Missing: " << missing << endl;

  return 0;
}