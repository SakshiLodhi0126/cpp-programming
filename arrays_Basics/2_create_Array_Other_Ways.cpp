#include <iostream>
using namespace std;

int main() {

  // Fourth Way: Size automatically detected
  int arr_e[] = {1, 2, 3, 4, 5};
  cout << arr_e[2] << endl;

  // Fifth Way: Initialize all elements with 0
  int arr_f[5] = {0};
  for (int i = 0; i < 5; i++) {
    cout << arr_f[i] << " ";
  }
  cout << endl;

  // Sixth Way: Partial initialization
  int arr_d[5] = {1, 2, 3};
  for (int i = 0; i < 5; i++) {
    cout << arr_d[i] << " ";
  }

  return 0;
}
