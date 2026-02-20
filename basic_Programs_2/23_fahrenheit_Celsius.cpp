#include <iostream>
using namespace std;
int main() {
  int min, max, step;
  cin >> min >> max >> step;
  for (int i = min; i <= max; i += step) {
    int c = (5.0 / 9.0) * (i - 32);
    cout << i << " " << c << endl;
  }
}