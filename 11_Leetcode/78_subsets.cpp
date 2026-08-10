#include <iostream>
#include <vector>

using namespace std;

// Helper recursive function for backtracking
void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
    // Step 1: Add the current subset to our list of results
    result.push_back(current);

    // Step 2: Loop through remaining elements
    for (int i = index; i < nums.size(); i++) {
        // Include the current number
        current.push_back(nums[i]);

        // Recurse for the next elements
        generateSubsets(i + 1, nums, current, result);

        // Backtrack: remove the number to try other options
        current.pop_back();
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result;
    vector<int> current;

    // Start generating subsets from index 0
    generateSubsets(0, nums, current, result);

    // Print all generated subsets
    cout << "\nAll Subsets:\n";
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}