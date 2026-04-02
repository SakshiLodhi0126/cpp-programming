#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter size: ";
  cin >> n;

  int arr[n];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Check for 3 consecutive odds
  bool found = false;

  for (int i = 0; i < n - 2; i++) {
    if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
      found = true;
      break;
    }
  }

  if (found) {
    cout << "True (3 consecutive odds found)";
  } else {
    cout << "False (No such sequence)";
  }

  return 0;
}