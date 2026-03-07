#include <iostream>
using namespace std;

int main() {

  // Declare array and initialize with values
  int age[] = {41, 69, 56, 32, 87, 58, 91};

  // sizeof(age) gives total memory occupied by array in bytes
  // sizeof(age)/sizeof(age[0]) gives total number of elements
  int n = sizeof(age) / sizeof(age[0]);

  cout << "Total size in bytes: " << sizeof(age) << endl;
  cout << "Total number of elements: " << n << endl;

  return 0;
}