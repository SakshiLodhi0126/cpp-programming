#include <iostream>

using namespace std;

// Procedural function without the class structure
bool isPerfectSquare(int num) {
    if (num < 1) return false;
    
    long long left = 1;
    long long right = num;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;
        
        if (square == num) {
            return true;
        } else if (square < num) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return false;
}

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // Call the function and print the result
    if (isPerfectSquare(num)) {
        cout << "Output: true\n";
    } else {
        cout << "Output: false\n";
    }
    
    return 0;
}