#include <iostream>
using namespace std;

/* Factorial (!): The product of a positive integer
 and all the positive integers below it (e.g., 4! =  4*3*2*1 = 24) */

int main() {
  int n;
  cin >> n;
  cout << "Factorial of " << n << " is: ";
  int fact = 1;
  for (int i = 1; i <= n; i++)
    fact *= i;

  cout << "The factorial of " << n << " is: " << fact;
  return 0;
}