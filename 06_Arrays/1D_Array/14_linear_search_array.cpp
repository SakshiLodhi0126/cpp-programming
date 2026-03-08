#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Enter the element to be found: ";
  cin >> key;

  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      cout << "Element found at index " << i << endl;
      return 0;
    }
  }

  cout << "The element doesn't exists in the array." << endl;

  return 0;
}