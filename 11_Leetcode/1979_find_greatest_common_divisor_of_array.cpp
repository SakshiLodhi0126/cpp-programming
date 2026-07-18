#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Find the minimum and maximum elements in the vector
    auto [minIt, maxIt] = minmax_element(nums.begin(), nums.end());

    // Calculate the Greatest Common Divisor of the two values
    int result = gcd(*minIt, *maxIt);

    // Output the result
    cout << "The GCD of the smallest and largest number is: " << result << endl;

    return 0;
}