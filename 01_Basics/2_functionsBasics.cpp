#include <iostream>
using namespace std;

// No Argument, No Return
void greet() { cout << "Hello" << endl; }

// Argument, No Return
void greet(string name) { cout << "Hello " << name << endl; }

// No Argument, Return
int subtract() {
  int a = 5;
  int b = 3;
  return a - b;
}

// Argument, Return
int add(int a, int b) { return a + b; }

int main() {
  greet();
  greet("Sakshi");

  // 1st Way
  int a = add(8, 3);
  cout << a << endl;

  // 2nd Way
  cout << add(8, 3) << endl;

  cout << subtract() << endl;

  return 0;
}
