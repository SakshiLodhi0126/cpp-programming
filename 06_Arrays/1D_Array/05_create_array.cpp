#include <iostream>
using namespace std;

int main() {

  // First Way: Declaration only (garbage values)
  int arr_a[5];
  cout << arr_a[0] << endl; // valid index (0 to 4)

  // Second Way: Declaration + Initialization
  int arr_b[5] = {1, 2, 3, 4, 5};
  cout << arr_b[4] << endl; // last element

  // Third Way: Size decided at runtime (NOT standard C++)
  // Correct way is using dynamic memory
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int *arr_c = new int[n];  // dynamic array
  cout << arr_c[0] << endl; // garbage value
  delete[] arr_c;           // free memory

  return 0;
}
