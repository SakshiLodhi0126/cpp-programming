#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  int array[n]; // array size decided by user

  int sum = 0; // variable to store sum of elements

  cout << "Enter elements: ";

  // input elements and calculate sum
  for (int i = 0; i < n; i++) {
    cin >> array[i];      // store element
    sum = sum + array[i]; // add element to sum
  }

  cout << "Array elements are:" << endl;

  // print array elements
  for (int i = 0; i < n; i++) {
    cout << array[i] << endl;
  }

  // print total sum
  cout << "Sum of the elements: " << sum << endl;

  return 0;
}