#include <iostream>
using namespace std;

// Area of circle = pi * r * r
int main() {
  float radius;
  cout << "Enter radius: ";
  cin >> radius;

  float area = 3.14 * radius * radius;
  cout << "Area of circle = " << area;

  return 0;
}