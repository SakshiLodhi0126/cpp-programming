#include <iostream>
using namespace std;
int main() {
// a program that takes an integer input and returns the prize based on the input.
    int n;
    cout << "Enter the number: ";
    cin >> n;
    // MacBook category
    if (n >= 300 && n <= 460) {
        cout << "You have won a MacBook." << endl;
        if (n <= 380) {
            cout << "You have won the model M1 Mac." << endl;
        } else {
            cout << "You have won the model M2 Mac." << endl;
        }
    }
    // Kurkure category
    else if (n >= 200 && n <= 280) {
        cout << "You have won a Kurkure." << endl;
        if (n <= 240) {
            cout << "You have won chilli kurkure." << endl;
        } else {
            cout << "You have won onion kurkure." << endl;
        }
    }
    // Cycle category
    else if (n >= 1100 && n <= 1500) {
        cout << "You have won a Cycle." << endl;
        if (n <= 1300) {
            cout << "You have won an Avon cycle." << endl;
        } else {
            cout << "You have won a Hero cycle." << endl;
        }
    }
    // Bike category
    else if (n > 50 && n <= 80) {
        cout << "You have won a Bike." << endl;
        if (n <= 65) {
            cout << "You have won a Bullet." << endl;
        } else {
            cout << "You have won a Rajdoot." << endl;
        }
    }
    // No prize
    else {
        cout << "Better luck next time!" << endl;
    }
    return 0; 
}
