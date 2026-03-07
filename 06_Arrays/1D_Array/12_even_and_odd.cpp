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

  int evenSum = 0, oddSum = 0;
  int evenCount = 0, oddCount = 0;

  cout << "\nEven numbers: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << " ";
      evenSum += arr[i];
      evenCount++;
    }
  }

  cout << "\nOdd numbers: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << " ";
      oddSum += arr[i];
      oddCount++;
    }
  }

  cout << "\n\nEven Count = " << evenCount;
  cout << "\nOdd Count = " << oddCount;

  cout << "\nEven Sum = " << evenSum;
  cout << "\nOdd Sum = " << oddSum;

  return 0;
}