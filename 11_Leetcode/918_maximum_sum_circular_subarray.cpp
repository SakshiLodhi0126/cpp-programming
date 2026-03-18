#include <bits/stdc++.h>
using namespace std;

int maxSubarraySumCircular(vector<int> &nums) {
  int maxSum = nums[0];
  int minSum = nums[0];
  int currMaxSum = nums[0];
  int currMinSum = nums[0];
  int totalSum = nums[0];

  for (int i = 1; i < nums.size(); i++) {
    currMaxSum = max(currMaxSum + nums[i], nums[i]);
    maxSum = max(maxSum, currMaxSum);

    currMinSum = min(currMinSum + nums[i], nums[i]);
    minSum = min(minSum, currMinSum);

    totalSum += nums[i];
  }

  int circularSum = totalSum - minSum;

  // Handle case when all elements are negative
  if (circularSum == 0) {
    return maxSum;
  }

  return max(maxSum, circularSum);
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  cout << maxSubarraySumCircular(nums) << endl;

  return 0;
}