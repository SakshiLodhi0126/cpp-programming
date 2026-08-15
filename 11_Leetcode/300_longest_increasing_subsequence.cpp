#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the length of the Longest Increasing Subsequence
int lengthOfLIS(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    // Create a dp array of the same size as nums, initialized to 1.
    // dp[i] will store the length of the longest increasing subsequence ending at index i.
    vector<int> dp(nums.size(), 1);
    int maxLength = 1;

    // Loop through each element in the array
    for (int i = 1; i < nums.size(); i++) {
        // Compare the current element with all previous elements
        for (int j = 0; j < i; j++) {
            // If we find a strictly smaller previous element, we can append nums[i] to its subsequence
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        // Keep track of the overall maximum length found so far
        maxLength = max(maxLength, dp[i]);
    }

    return maxLength;
}

int main() {
    // Example test case from LeetCode
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    
    // Call the function and print the result
    int result = lengthOfLIS(nums);
    cout << "The length of the Longest Increasing Subsequence is: " << result << endl;
    
    // Additional test case
    vector<int> nums2 = {0, 1, 0, 3, 2, 3};
    cout << "Test case 2 result: " << lengthOfLIS(nums2) << endl;

    return 0;
}