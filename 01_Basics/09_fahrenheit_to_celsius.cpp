#include <iostream>
using namespace std;

// Convert Fahrenheit to Celsius
int main() {
  float f;
  cout << "Enter temperature in Fahrenheit: ";
  cin >> f;

  float c = (f - 32) * 5 / 9;
  cout << "Temperature in Celsius = " << c;

  return 0;
}