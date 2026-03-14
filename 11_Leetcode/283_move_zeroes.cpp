#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int j = 0;

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        swap(nums[i], nums[j]);
        j++;
      }
    }
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

  obj.moveZeroes(nums);

  cout << "Array after moving zeroes: ";

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }

  return 0;
}