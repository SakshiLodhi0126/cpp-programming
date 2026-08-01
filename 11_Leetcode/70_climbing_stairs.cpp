#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Get user input
    cout << "Enter the number of steps (n): ";
    cin >> n;

    // Base cases
    if (n <= 0) {
        cout << "Number of ways: 0" << endl;
        return 0;
    }
    if (n <= 2) {
        cout << "Number of ways: " << n << endl;
        return 0;
    }

    int prev2 = 1; // ways to reach step 1
    int prev1 = 2; // ways to reach step 2
    int current = 0;

    // Calculate ways for step 3 up to n
    for (int i = 3; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    cout << "Number of ways to climb " << n << " stairs: " << prev1 << endl;

    return 0;
}