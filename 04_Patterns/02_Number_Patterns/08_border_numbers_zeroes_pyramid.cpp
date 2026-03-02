#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        // spaces
        for (int s = 0; s < n - i - 1; s++) {
            cout << "\t";
        }
        // values
        for (int j = 0; j < 2 * i + 1; j++) {

            if (j == 0 || j == 2 * i) {
                cout << (i + 1) << "\t";
            }
            else {
                cout << "0\t";
            }
        }
        cout << endl;
    }
    return 0;
}
