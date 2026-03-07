#include <iostream>
using namespace std;

int main() {

  cout << "Enter the number of elements: ";
  int n;
  cin >> n;

  int arr[n];

  cout << "Enter the " << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  int avg = sum / n;

  cout << "Average: " << avg;

  return 0;
}