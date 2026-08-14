#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Easy standalone function for the Jump Game logic
bool canJump(vector<int>& nums) {
    int maxReach = 0;
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        // If the current index is beyond our maximum reach, we can't move forward
        if (i > maxReach) {
            return false;
        }
        
        // Update the maximum reach
        maxReach = max(maxReach, i + nums[i]);
        
        // If the maximum reach is already at or beyond the last index, we can stop
        if (maxReach >= n - 1) {
            return true;
        }
    }
    
    return true;
}

int main() {
    int n;
    
    // 1. Get the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    // Handle edge case for 0 elements
    if (n <= 0) {
        cout << "The array must have at least 1 element." << endl;
        return 0;
    }

    vector<int> nums(n);
    
    // 2. Get the array elements from the user
    cout << "Enter " << n << " numbers separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // 3. Call the logic and print the result
    if (canJump(nums)) {
        cout << "\nResult: true (You can reach the last index!)" << endl;
    } else {
        cout << "\nResult: false (You cannot reach the last index.)" << endl;
    }

    return 0;
}
