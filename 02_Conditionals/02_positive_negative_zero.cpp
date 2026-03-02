#include <iostream>
using namespace std;

// Check number sign
int main() {
  int n;
  cin >> n;

  if (n > 0)
    cout << "Positive";
  else if (n < 0)
    cout << "Negative";
  else
    cout << "Zero";

  return 0;
}