#include <iostream>
#include <vector>
using namespace std;

// Time Complexity - O(n^3)

void printSubarrays(vector<int> &v) {
  int n = v.size();

  for (int start = 0; start < n; start++) {
    for (int end = start; end < n; end++) {
      for (int i = start; i <= end; i++) {
        cout << v[i] << " ";
      }
      cout << endl;
    }
  }
}

int main() {
  int n;
  cout << "Enter size: ";
  cin >> n;

  vector<int> v;

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  cout << "\nSubarrays are:\n";
  printSubarrays(v);
}