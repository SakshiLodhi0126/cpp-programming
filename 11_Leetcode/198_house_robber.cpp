#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the maximum amount of money you can rob
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    int prev2 = 0; // Max money stolen 2 houses back
    int prev1 = 0; // Max money stolen 1 house back

    for (int money : nums) {
        int current = max(prev1, prev2 + money);
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    int n;
    cout << "Enter the number of houses: ";
    cin >> n;

    if (n <= 0) {
        cout << "Maximum money robbed: 0" << endl;
        return 0;
    }

    vector<int> nums(n);
    cout << "Enter the money in each house separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int maxMoney = rob(nums);
    cout << "Maximum money that can be robbed: " << maxMoney << endl;

    return 0;
}