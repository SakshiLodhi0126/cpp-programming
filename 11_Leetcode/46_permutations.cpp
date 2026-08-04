#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate permutations by swapping elements
void solvePermutations(int index, vector<int>& nums, vector<vector<int>>& result) {
    // Base case: when we reach the end, store the current permutation
    if (index == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); ++i) {
        swap(nums[index], nums[i]);                  // Choose
        solvePermutations(index + 1, nums, result);  // Recurse
        swap(nums[index], nums[i]);                  // Backtrack (undo)
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers separated by space: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<vector<int>> result;
    solvePermutations(0, nums, result);

    // Print all generated permutations
    cout << "\nAll Permutations:\n[\n";
    for (const auto& perm : result) {
        cout << "  [ ";
        for (int i = 0; i < perm.size(); ++i) {
            cout << perm[i] << (i == perm.size() - 1 ? "" : ", ");
        }
        cout << " ]\n";
    }
    cout << "]\n";

    return 0;
}