#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void nextPermutation(vector<int> &nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: find pivot
    while (i >= 0 && nums[i] >= nums[i + 1]) {
      i--;
    }

    // Step 2: find next greater element
    if (i >= 0) {
      int j = n - 1;
      while (nums[j] <= nums[i]) {
        j--;
      }
      swap(nums[i], nums[j]);
    }

    // Step 3: reverse suffix
    reverse(nums.begin() + i + 1, nums.end());
  }
};

int main() {

  Solution obj;
  int n;

  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  obj.nextPermutation(nums);

  cout << "Next permutation: ";
  for (int x : nums) {
    cout << x << " ";
  }

  return 0;
}