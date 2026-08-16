#include <iostream>
#include <vector>

using namespace std;

// Standalone function to find the minimum element
int findMin(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // If mid is greater than the rightmost, minimum is in the right half
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } 
        // Otherwise, minimum is in the left half (or is the mid element)
        else {
            right = mid;
        }
    }
    
    // left == right points to the minimum element
    return nums[left];
}

int main() {
    int n;
    
    // 1. Get the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Handle edge case if the user enters 0
    if (n <= 0) {
        cout << "Array must have at least one element." << endl;
        return 1;
    }

    vector<int> nums(n);
    
    // 2. Get the array elements from the user
    cout << "Enter the " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // 3. Find and print the minimum element
    int minElement = findMin(nums);
    cout << "The minimum element is: " << minElement << endl;

    return 0;
}