#include <iostream>
using namespace std;

int main() {

  // sizeof operator shows memory size in bytes

  cout << "Size of int: " << sizeof(int) << " bytes" << endl;
  cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
  cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
  cout << "Size of long long int: " << sizeof(long long int) << " bytes"
       << endl;
  cout << "Size of float: " << sizeof(float) << " bytes" << endl;
  cout << "Size of double: " << sizeof(double) << " bytes" << endl;
  cout << "Size of char: " << sizeof(char) << " byte" << endl;

  cout << endl;

  // signed and unsigned example
  signed int a = -10;  // can store negative and positive
  unsigned int b = 10; // only positive values

  cout << "Signed int value: " << a << endl;
  cout << "Unsigned int value: " << b << endl;

  // long and long long example
  long int x = 123456;
  long long int y = 1234567890;

  cout << "Long int value: " << x << endl;
  cout << "Long long int value: " << y << endl;

  return 0;
}