#include <iostream>
using namespace std;

int main() {
  int arr[5] = {10, 25, 7, 90, 15}; // predefined array
  int min = arr[0];                 // assume first element is smallest

  for (int i = 1; i < 5; i++) {
    if (arr[i] < min) {
      min= arr[i]; // update min if smaller element found
    }
  }

  cout << "Smallest number = " << min;

  return 0;
}