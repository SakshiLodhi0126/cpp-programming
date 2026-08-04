#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of bits (n): ";
    cin >> n;

    int totalElements = 1 << n; // 2^n elements

    cout << "Gray Code Sequence:\n[ ";
    for (int i = 0; i < totalElements; ++i) {
        // Bitwise formula for Gray code: i XOR (i >> 1)
        int gray = i ^ (i >> 1);
        cout << gray << (i == totalElements - 1 ? "" : ", ");
    }
    cout << " ]" << endl;

    return 0;
}