#include <iostream>
using namespace std;

// Program to demonstrate sizeof operator
// sizeof tells memory occupied by a data type

int main() {
  cout << "Size of int: " << sizeof(int) << " bytes" << endl;
  cout << "Size of float: " << sizeof(float) << " bytes" << endl;
  cout << "Size of char: " << sizeof(char) << " bytes" << endl;
  cout << "Size of double: " << sizeof(double) << " bytes" << endl;
  cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

  return 0;
}