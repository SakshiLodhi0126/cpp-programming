#include <iostream>

using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        // Edge case: Ugly numbers must be positive
        if (n <= 0) {
            return false;
        }
        
        // Divide by 2, 3, and 5 as much as possible
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;
        
        // If the remaining number is 1, it's an ugly number
        return n == 1;
    }
};

int main() {
    Solution solution;
    int n;
    
    cout << "Enter an integer to check if it's an ugly number: ";
    if (cin >> n) {
        if (solution.isUgly(n)) {
            cout << n << " is an ugly number (true)." << endl;
        } else {
            cout << n << " is NOT an ugly number (false)." << endl;
        }
    } else {
        cout << "Invalid input." << endl;
    }
    
    return 0;
}