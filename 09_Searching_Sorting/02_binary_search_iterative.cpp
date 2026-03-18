#include <iostream>
#include <vector>
using namespace std;

// Binary Search Function
int binarySearch(vector<int> &arr, int key) {

  int low = 0;
  int high = arr.size() - 1;

  while (low <= high) {

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
      return mid; // element found
    } else if (arr[mid] < key) {
      low = mid + 1; // go right
    } else {
      high = mid - 1; // go left
    }
  }

  return -1; // not found
}

int main() {

  int n;
  cout << "Enter size: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter sorted elements:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int key;
  cout << "Enter element to search: ";
  cin >> key;

  int result = binarySearch(arr, key);

  if (result != -1)
    cout << "Element found at index: " << result;
  else
    cout << "Element not found";

  return 0;
}