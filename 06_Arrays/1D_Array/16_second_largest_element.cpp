#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int largest = arr[0];
  int second = -1; // assume no second largest

  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      second = largest;
      largest = arr[i];
    } else if (arr[i] > second && arr[i] != largest) {
      second = arr[i];
    }
  }

  if (second == -1) {
    cout << "No second largest element";
  } else {
    cout << "Second largest: " << second;
  }

  return 0;
}