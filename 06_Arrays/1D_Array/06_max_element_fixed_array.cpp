#include <iostream>
using namespace std;

int main() {
  int arr[5] = {10, 25, 7, 90, 15}; // predefined array
  int max = arr[0];                 // assume first element is largest

  for (int i = 1; i < 5; i++) {
    if (arr[i] > max) {
      max = arr[i]; // update max if larger element found
    }
  }

  cout << "Largest number = " << max;

  return 0;
}