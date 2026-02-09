#include <iostream>
using namespace std;

int main() {
  // Declare and initialize the array
  int arr_a[] = {10, 20, 30, 40, 50};

  // Calculate total number of elements in the array
  int s = sizeof(arr_a) / sizeof(int);
  // sizeof(arr_a)      -> total bytes of array
  // sizeof(arr_a[0])   -> bytes of one element
  // s = total elements

  // Loop to print array elements
  for (int i = 0; i < s; i++)
    cout << arr_a[i] << " ";

  // Move to next line after printing array
  cout << endl;

  return 0; // Program ends successfully
}
