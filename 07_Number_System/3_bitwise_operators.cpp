#include <iostream>
using namespace std;
int main() {
  int a, b;

  cout << "Enter first number: ";
  cin >> a;

  cout << "Enter second number: ";
  cin >> b;

  // Bitwise AND
  // & compares each bit and returns 1 if both bits are 1
  cout << "\nBitwise AND (a & b): " << (a & b) << endl;

  // Bitwise OR
  // | returns 1 if at least one bit is 1
  cout << "Bitwise OR (a | b): " << (a | b) << endl;

  // Bitwise XOR
  // ^ returns 1 if bits are different
  cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;

  // Bitwise NOT
  // ~ reverses all bits (0 becomes 1 and 1 becomes 0)
  // result becomes negative due to 2's complement system
  cout << "Bitwise NOT (~a): " << (~a) << endl;

  // Left Shift
  // << shifts bits to left
  // multiplies number by 2 each shift
  cout << "Left Shift (a << 1): " << (a << 1) << endl;

  // Right Shift
  // >> shifts bits to right
  // divides number by 2 each shift
  cout << "Right Shift (a >> 1): " << (a >> 1) << endl;

  return 0;
}