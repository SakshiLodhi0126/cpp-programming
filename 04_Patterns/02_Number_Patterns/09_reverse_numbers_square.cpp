#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n; j >= 1; j--) {
            cout << j << " "; 
        }
        cout << endl;
    }
    return 0;
}
