#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closestSum = nums[0] + nums[1] + nums[2];
    
    for (int i = 0; i < nums.size() - 2; i++) {
        int left = i + 1;
        int right = nums.size() - 1;
        
        while (left < right) {
            int currentSum = nums[i] + nums[left] + nums[right];
            
            if (abs(currentSum - target) < abs(closestSum - target)) {
                closestSum = currentSum;
            }
            
            if (currentSum > target) {
                right--;
            } else if (currentSum < target) {
                left++;
            } else {
                return currentSum;
            }
        }
    }
    
    return closestSum;
}

int main() {
    int n, target;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter target value: ";
    cin >> target;
    
    int result = threeSumClosest(nums, target);
    cout << "The closest sum is: " << result << endl;
    
    return 0;
}