#include <iostream>

using namespace std;

// Function to count set bits (number of 1s)
int hammingWeight(int n) {
    int count = 0;
    
    // Brian Kernighan's Algorithm
    while (n != 0) {
        n = n & (n - 1); // Removes the rightmost '1' bit
        count++;
    }
    
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int result = hammingWeight(n);
    
    cout << "Number of 1 bits: " << result << endl;

    return 0;
}