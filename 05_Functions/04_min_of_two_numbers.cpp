#include <iostream>
using namespace std;

int min(int a, int b) { // parameters
  if (a < b) {
    return a;
  } else {
    return b;
  }
}
int main() {
  cout << min(4, 7) << endl; // arguments (literals)
  cout << min(6, 2) << endl;
  return 0;
}
