#include <iostream>

using namespace std;

// Function to calculate square root rounded down to the nearest integer
int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    
    int low = 1, high = x;
    int ans = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Cast to long long to prevent integer overflow when mid * mid exceeds INT_MAX
        if ((long long)mid * mid <= x) {
            ans = mid;        // Store mid as potential answer
            low = mid + 1;    // Search higher numbers
        } else {
            high = mid - 1;   // Search lower numbers
        }
    }
    
    return ans;
}

int main() {
    int x;
    
    cout << "Enter a non-negative integer: ";
    cin >> x;
    
    if (x < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 0;
    }
    
    int result = mySqrt(x);
    
    cout << "Square root (rounded down): " << result << endl;
    
    return 0;
}