#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  int pivotIndex(vector<int> &nums) {
    int total = 0;
    // calculate total sum
    for (int i = 0; i < nums.size(); i++) {
      total += nums[i];
    }
    int leftsum = 0;
    // find pivot index
    for (int i = 0; i < nums.size(); i++) {
      int rightsum = total - leftsum - nums[i];
      if (leftsum == rightsum) {
        return i;
      }
      leftsum += nums[i];
    }
    return -1;
  }
};
int main() {
  int n;
  cin >> n; // size of array
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i]; // input elements
  }
  Solution obj;
  cout << obj.pivotIndex(nums);
  return 0;
}