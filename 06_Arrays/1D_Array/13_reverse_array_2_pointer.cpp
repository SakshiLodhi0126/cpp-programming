#include <algorithm>
#include <iostream>
using namespace std;

// Function to reverse the array using two pointers
void reverseArray(int arr[], int size) {
  int left = 0;
  int right = size - 1;

  while (left < right) {
    // Swap elements and move pointers
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}

int main() {
  int n;

  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n]; // Create an array of size n

  cout << "Enter " << n << " elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  reverseArray(arr, n);

  cout << "Reversed array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
