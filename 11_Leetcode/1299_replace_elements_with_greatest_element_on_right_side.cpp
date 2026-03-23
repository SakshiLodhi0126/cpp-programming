#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << "Enter size of array: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxRight = -1;

  for (int i = n - 1; i >= 0; i--) {
    int current = arr[i];
    arr[i] = maxRight;
    maxRight = max(maxRight, current);
  }

  cout << "Output array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}