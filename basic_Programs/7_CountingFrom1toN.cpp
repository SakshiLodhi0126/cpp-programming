#include <iostream>
using namespace std;
int main() {
// a program that takes an integer input and returns the counting from 1 to n.
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << i << " " <<endl;
    }
    return 0;
}