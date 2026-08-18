#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Procedural function without the class structure
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        // If the number exists in the map and the distance is <= k
        if (numMap.count(nums[i]) && i - numMap[nums[i]] <= k) {
            return true;
        }
        // Update the most recent index for this number
        numMap[nums[i]] = i;
    }
    
    return false;
}

int main() {
    int n, k;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the value for k: ";
    cin >> k;
    
    // Call the function and print the result
    if (containsNearbyDuplicate(nums, k)) {
        cout << "Output: true\n";
    } else {
        cout << "Output: false\n";
    }
    
    return 0;
}