#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        // Middle spaces
        for (int j = 0; j < i * 4; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }       
        cout << endl;
    }
    return 0;
}
