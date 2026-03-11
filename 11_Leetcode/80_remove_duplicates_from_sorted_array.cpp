#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int n = nums.size();

    if (n <= 2)
      return n;

    int i = 2;

    for (int j = 2; j < n; j++) {
      if (nums[j] != nums[i - 2]) {
        nums[i] = nums[j];
        i++;
      }
    }

    return i;
  }
};

int main() {
  vector<int> nums = {1, 1, 1, 2, 2, 3};

  Solution obj;
  int k = obj.removeDuplicates(nums);

  cout << "k = " << k << endl;
  cout << "Array after removing extra duplicates: ";

  for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
  }

  return 0;
}