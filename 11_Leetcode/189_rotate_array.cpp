#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void rotate(vector<int> &nums, int k) {
  int n = nums.size();
  k = k % n;
  reverse(nums.begin(), nums.end());
  // last elements needs to be in front
  reverse(nums.begin(), nums.begin() + k);
  // either the next elements shift OR the remaining elements are reversed
  reverse(nums.begin() + k, nums.end());
  return;
}
int main() { return 0; }