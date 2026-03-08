#include <algorithm>
#include <iostream>


using namespace std;

// Function to perform linear search
// Returns the index of the element if found, otherwise returns -1
int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i; // Found! Return the current index
    }
  }
  return -1; // Not found after checking all elements
}

int main() {
  int n, key;

  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n]; // Create array based on user input size
  cout << "Enter " << n << " elements: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Enter the element to search for: ";
  cin >> key;

  // Call the function and store the result
  int result = linearSearch(arr, n, key);

  if (result != -1) {
    cout << "Element found at index: " << result << endl;
  } else {
    cout << "Element not present in the array." << endl;
  }

  return 0;
}
