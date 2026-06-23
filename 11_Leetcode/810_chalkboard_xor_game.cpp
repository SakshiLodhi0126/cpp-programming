#include <iostream>
#include <vector>
using namespace std;

bool xorGame(vector<int>& nums) {
    int totalXor = 0;

    for (int num : nums) {
        totalXor ^= num;
    }

    return (totalXor == 0 || nums.size() % 2 == 0);
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (xorGame(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}