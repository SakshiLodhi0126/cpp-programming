#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Calculate the current width and limiting height
            int width = right - left;
            int current_height = min(height[left], height[right]);
            
            // Update the maximum water found so far
            max_water = max(max_water, current_height * width);
            
            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    if (n < 2) {
        cout << "You need at least 2 lines to form a container." << endl;
        return 0;
    }

    vector<int> height(n);
    cout << "Enter the heights of the lines separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution solver;
    int result = solver.maxArea(height);

    cout << "The maximum amount of water the container can store is: " << result << endl;

    return 0;
}