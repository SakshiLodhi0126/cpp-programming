#include <iostream>
using namespace std;
// Function for calculator
void calculator(int a, int b, char op) {
    switch(op) {
        case '+':
            cout << "Addition = " << a + b;
            break;
        case '-':
            cout << "Subtraction = " << a - b;
            break;
        case '*':
            cout << "Multiplication = " << a * b;
            break;
        case '/':
            cout << "Division = " << a / b;
            break;
        default:
            cout << "Invalid operator";
    }
}
int main() {
    int x, y;
    char ch;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Enter operator (+, -, *, /): ";
    cin >> ch;
    calculator(x, y, ch);   // function call
    return 0;
}