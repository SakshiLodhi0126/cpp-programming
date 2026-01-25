#include <iostream>
using namespace std;
int main() {
  // a program that takes an integer input and returns the prize based on the input.
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if (n >= 300 && n < 460) {
    cout << "You have won a MacBook.";
  } else if (n >= 200 && n <= 280) {
    cout << "You have won a Kurkure.";
  } else if (n >= 1100 && n <= 1500) {
    cout << "You have won a Cycle.";
  } else if (n >= 50 && n <= 80) {
    cout << "You have won a Bike.";
  } else {
    cout << "Better luck next time!";
  }
  return 0;
}
