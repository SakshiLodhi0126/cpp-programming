#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> leftproduct(n, 1);
    vector<int> rightproduct(n, 1);
    vector<int> ans(n);

    for (int i = 1; i < n; i++) {
      leftproduct[i] = leftproduct[i - 1] * nums[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
      rightproduct[i] = rightproduct[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++) {
      ans[i] = leftproduct[i] * rightproduct[i];
    }

    return ans;
  }
};

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> nums(n);

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  Solution obj;
  vector<int> result = obj.productExceptSelf(nums);

  cout << "Output: ";
  for (int i = 0; i < n; i++) {
    cout << result[i] << " ";
  }

  return 0;
}