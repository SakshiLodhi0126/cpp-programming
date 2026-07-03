#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Approach 1: Math (Gauss' Sum Formula)
    int missingNumberSum(const vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;
        
        for (int num : nums) {
            actualSum += num;
        }
        
        return expectedSum - actualSum;
    }

    // Approach 2: Bit Manipulation (XOR)
    int missingNumberXOR(const vector<int>& nums) {
        int n = nums.size();
        int xorSum = n;
        
        for (int i = 0; i < n; i++) {
            xorSum ^= i ^ nums[i];
        }
        
        return xorSum;
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements (n): ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid input size." << endl;
        return 1;
    }

    vector<int> nums(n);
    cout << "Enter " << n << " distinct elements in the range [0, " << n << "]:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solver;
    
    // Running both methods to show they yield the same result
    int missingSum = solver.missingNumberSum(nums);
    int missingXOR = solver.missingNumberXOR(nums);

    cout << "\n--- Results ---" << endl;
    cout << "Missing Number (Sum Method): " << missingSum << endl;
    cout << "Missing Number (XOR Method): " << missingXOR << endl;

    return 0;
}