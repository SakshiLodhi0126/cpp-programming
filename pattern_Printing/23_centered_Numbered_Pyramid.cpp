#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;   // User input
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        // Print 1
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "1 ";
        }
        cout << endl;
    }
    return 0;
}
