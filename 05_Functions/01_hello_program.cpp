#include <iostream>
using namespace std;
// function definition
int printHello() {
  cout << "Hello!" << endl;
  return 3;
}
int main() {
  // function call / invoke
  int val = printHello();
  cout << "val " << val << endl;
  return 0;
}