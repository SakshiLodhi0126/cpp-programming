#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // Pointer for the last valid element in nums1
        int j = n - 1;      // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last position in nums1 total capacity
        
        // Compare elements from the back and place the larger one at index k
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        
        // If there are remaining elements in nums2, copy them over
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    int m, n;
    
    // User Input
    cout << "Enter the number of initial elements in nums1 (m): ";
    cin >> m;
    cout << "Enter the number of elements in nums2 (n): ";
    cin >> n;
    
    // nums1 needs a total capacity of m + n
    vector<int> nums1(m + n, 0);
    vector<int> nums2(n);
    
    cout << "Enter " << m << " sorted elements for nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    
    cout << "Enter " << n << " sorted elements for nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    // Call the solution
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    
    // Output the result
    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}