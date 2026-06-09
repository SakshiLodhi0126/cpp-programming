#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void wiggleSort(vector<int> &nums) {
  vector<int> arr = nums;
  sort(arr.begin(), arr.end());

  int n = nums.size();
  int left = (n - 1) / 2;
  int right = n - 1;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      nums[i] = arr[left--];
    else
      nums[i] = arr[right--];
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  wiggleSort(nums);

  for (int x : nums) {
    cout << x << " ";
  }

  return 0;
}