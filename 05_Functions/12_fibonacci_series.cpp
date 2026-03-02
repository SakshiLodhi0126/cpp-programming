#include <iostream>
using namespace std;
// Function to print Fibonacci series
void fibonacci(int n) {
  int a = 0, b = 1, next;
  cout << "Fibonacci Series: ";
  for (int i = 1; i <= n; i++) {
    cout << a << " ";
    next = a + b;
    a = b;
    b = next;
  }
}
int main() {
  int n;
  cout << "Enter number of terms: ";
  cin >> n;
  fibonacci(n); // function call
  return 0;
}