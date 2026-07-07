#include <iostream>
#include <vector>

using namespace std;

// Function to find the duplicate number
int findDuplicate(const vector<int>& nums) {
    int start = 1;
    int end = nums.size() - 1; // n
    
    while (start < end) {
        int mid = start + (end - start) / 2;
        int count = 0;
        
        // Count how many numbers are less than or equal to mid
        for (int i : nums) {
            if (i <= mid) {
                count++;
            }
        }
        
        // If the count is greater than mid, the duplicate lies in the left half
        if (count > mid) {
            end = mid;
        } else {
            // Otherwise, it lies in the right half
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    int n;
    cout << "Enter the value of n (array will contain n + 1 elements): ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input for n." << endl;
        return 1;
    }

    vector<int> nums(n + 1);
    cout << "Enter " << n + 1 << " integers (each between 1 and " << n << "): " << endl;
    for (int i = 0; i < n + 1; ++i) {
        cin >> nums[i];
    }

    int duplicate = findDuplicate(nums);
    
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}