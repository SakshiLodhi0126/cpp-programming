#include <iostream>
#include <vector>
#include <numeric> // Required for std::gcd

using namespace std;

// Function to check if the array is "good"
bool isGoodArray(vector<int>& nums) {
    if (nums.empty()) return false;
    
    int running_gcd = nums[0];
    
    for (int num : nums) {
        running_gcd = gcd(running_gcd, num);
        
        // Early exit optimization: if GCD reaches 1, it will stay 1
        if (running_gcd == 1) {
            return true;
        }
    }
    
    return running_gcd == 1;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter the number of elements: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input size.\n";
        return 0;
    }
    
    vector<int> nums(n);
    cout << "Enter " << n << " positive integers separated by space: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    // Check and output result
    if (isGoodArray(nums)) {
        cout << "Result: true (The array is good)\n";
    } else {
        cout << "Result: false (The array is not good)\n";
    }
    
    return 0;
}