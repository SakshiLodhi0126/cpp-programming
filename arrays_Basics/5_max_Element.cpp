#include <climits> // For INT_MIN
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

  // Initialize ans with the smallest possible integer
  int ans = INT_MIN;

  // Find the maximum element in the array
  for (int i = 0; i < n; i++) {
    if (ans < arr[i]) {
      ans = arr[i];
    }
  }
  // Display the result
  cout << "Maximum element in the array is: " << ans << endl;

  return 0;
}
