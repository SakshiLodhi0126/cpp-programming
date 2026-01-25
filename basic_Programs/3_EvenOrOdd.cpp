#include <iostream>
using namespace std;
int main() {
// a program that takes an integer input and returns whether it is even or odd.
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }
    return 0;
}