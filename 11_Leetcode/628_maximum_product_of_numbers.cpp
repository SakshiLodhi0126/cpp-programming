#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter the total number of elements: ";
    cin >> n;

    if (n < 3) {
        cout << "Error: You need at least 3 numbers to calculate the product." << endl;
        return 0;
    }

    // Track 3 largest and 2 smallest numbers
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        // Update 3 largest values
        if (num > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max3 = max2;
            max2 = num;
        } else if (num > max3) {
            max3 = num;
        }

        // Update 2 smallest values
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }

    // Calculate maximum product
    int option1 = max1 * max2 * max3;
    int option2 = min1 * min2 * max1;
    int maxProduct = max(option1, option2);

    cout << "Maximum product of three numbers: " << maxProduct << endl;

    return 0;
}