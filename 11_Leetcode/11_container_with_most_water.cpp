#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Solution logic
int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_water = 0;

    while (left < right) {
        int current_height = min(height[left], height[right]);
        int current_width = right - left;
        max_water = max(max_water, current_height * current_width);

        // Always move the shorter line inward
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_water;
}

int main() {
    int n;
    cout << "Enter the number of lines: ";
    if (!(cin >> n) || n < 2) {
        cout << "Please enter an integer greater than or equal to 2." << endl;
        return 1;
    }

    vector<int> height(n);
    cout << "Enter the heights separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int result = maxArea(height);
    cout << "\nMaximum water area: " << result << endl;

    return 0;
}