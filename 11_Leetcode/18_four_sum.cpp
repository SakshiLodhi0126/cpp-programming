#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find all unique quadruplets
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ans;
    int n = nums.size();
    if (n < 4) return ans;

    // Sort array to use two-pointer approach
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; ++i) {
        // Skip duplicate values for the 1st element
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n - 2; ++j) {
            // Skip duplicate values for the 2nd element
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                // Prevent 32-bit integer overflow
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                    // Skip duplicate values for 3rd and 4th elements
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return ans;
}

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    // Find quadruplets
    vector<vector<int>> result = fourSum(nums, target);

    // Output the results
    cout << "\nQuadruplets that sum to " << target << ":\n";
    if (result.empty()) {
        cout << "No quadruplets found." << endl;
    } else {
        for (const auto& quad : result) {
            cout << "[" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", " << quad[3] << "]\n";
        }
    }

    return 0;
}