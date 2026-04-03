#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int differenceOfSum(vector<int> &nums) {
    int elementSum = 0;
    int digitSum = 0;

    for (int i = 0; i < nums.size(); i++) {
      elementSum += nums[i];

      int num = nums[i];
      while (num > 0) {
        digitSum += num % 10;
        num /= 10;
      }
    }

    return abs(elementSum - digitSum);
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
  int result = obj.differenceOfSum(nums);

  cout << "Difference: " << result << endl;

  return 0;
}