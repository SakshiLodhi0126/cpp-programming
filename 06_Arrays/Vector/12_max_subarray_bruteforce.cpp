#include <climits>
#include <iostream>
#include <vector>

// Time Complexity - O(n^2)

using namespace std;

int maxSubarraySum(vector<int> &v) {
  int n = v.size();
  int maxSum = INT_MIN;

  for (int start = 0; start < n; start++) {
    for (int end = start; end < n; end++) {
      int sum = 0;

      for (int i = start; i <= end; i++) {
        sum += v[i];
      }

      if (sum > maxSum) {
        maxSum = sum;
      }
    }
  }

  return maxSum;
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

  cout << "Maximum Subarray Sum = " << maxSubarraySum(v);
}