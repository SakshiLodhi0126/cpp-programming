#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Upper part
    for (int i = 1; i <= n; i++) {
        // Upper Left
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0)
                cout << i << " ";
            else
                cout << 2 * n - i << " ";
        }
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << "  ";
        }
        // Upper Right
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0)
                cout << i << " ";
            else
                cout << 2 * n - i << " ";
        }
        cout << endl;  
    }
    // Lower part
    for (int i = n-1; i >= 1; i--) {
        // Lower Right
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0)
                cout << i << " ";
            else
                cout << 2 * n - i << " ";
        }
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << "  ";
        }
        // Lower Left
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 0)
                cout << i << " ";
            else
                cout << 2 * n - i << " ";
        }
        
        cout << endl;  
    }
    return 0;
}
