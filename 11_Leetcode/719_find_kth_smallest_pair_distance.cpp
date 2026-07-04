#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        // 1. Sort the array to use the two-pointer approach
        sort(nums.begin(), nums.end());
        
        int low = 0;
        int high = nums.back() - nums[0];
        int ans = high;
        
        // 2. Binary search on the absolute difference/distance
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Count pairs with a distance <= mid using a sliding window
            int count = 0;
            int left = 0;
            for (int right = 0; right < nums.size(); ++right) {
                while (nums[right] - nums[left] > mid) {
                    left++;
                }
                count += (right - left);
            }
            
            // Adjust binary search boundaries
            if (count >= k) {
                ans = mid;        // mid is a valid candidate
                high = mid - 1;   // Try to find a smaller valid distance
            } else {
                low = mid + 1;    // The current distance allows too few pairs
            }
        }
        
        return ans;
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cout << "Enter the number of elements: ";
    if (!(cin >> n)) return 0;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    cout << "Enter the value of k: ";
    cin >> k;
    
    Solution solver;
    int result = solver.smallestDistancePair(nums, k);
    
    cout << "The " << k << "-th smallest pair distance is: " << result << "\n";
    
    return 0;
}