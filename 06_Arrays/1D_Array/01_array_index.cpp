#include <iostream>
using namespace std;

int main() {
  int marks[5] = {99, 100, 54, 36, 88};

  // valid index range = 0 to size-1
  cout << marks[0] << endl; // prints first element (index starts from 0)
  cout << marks[1] << endl; // prints second element
  cout << marks[2] << endl; // prints third element
  cout << marks[3] << endl; // prints fourth element
  cout << marks[4] << endl; // prints fifth element

  cout << marks[5] << endl;
  // Error: index 5 does not exist in this array.
  // Array size is 5, so valid indices are from 0 to 4 only.
  // Accessing index 5 is called "out of bounds access"
  // and may give garbage value or cause runtime error.

  return 0;
}