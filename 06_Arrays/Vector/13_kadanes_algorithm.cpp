#include <climits>
#include <iostream>
#include <vector>

using namespace std;

// TIme Complexity (Linear - O(n))

int maxSubarraySum(vector<int> &v) {
  int currentSum = 0;
  int maxSum = INT_MIN;

  for (int i = 0; i < v.size(); i++) {
    currentSum += v[i];

    if (currentSum > maxSum) {
      maxSum = currentSum;
    }

    if (currentSum < 0) {
      currentSum = 0;
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