#include <climits> // For INT_MAX
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  int arr[n];
  cout << "Enter " << n << " elements:" << endl;
  for (int i = 0; i < n; i++) {
    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
  }

  // Initialize min value with the largest possible integer
  int ans = INT_MAX;

  // Find the minimum element in the array
  for (int i = 0; i < n; i++) {
    if (ans > arr[i]) {
      ans = arr[i]; // Update minimum
    }
  }

  // Display the result
  cout << "Minimum element in the array is: " << ans << endl;

  return 0; // Program ends
}
