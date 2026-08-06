#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to check for duplicates
bool hasDuplicate(const vector<int>& nums) {
    unordered_set<int> seen;
    
    for (int num : nums) {
        if (seen.count(num) > 0) {
            return true; // Duplicate found
        }
        seen.insert(num);
    }
    
    return false; // All elements are unique
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers separated by space: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (hasDuplicate(nums)) {
        cout << "Output: true (Contains duplicate)" << endl;
    } else {
        cout << "Output: false (All elements are unique)" << endl;
    }

    return 0;
}