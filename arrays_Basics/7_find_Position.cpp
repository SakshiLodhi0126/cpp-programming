#include <iostream>
using namespace std;
int main() {

  // Linear Search
  int arr_a[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr_a) / sizeof(arr_a[0]);
  int num;
  cout << "Enter a number: ";
  cin >> num;
  for (int i = 0; i < size; i++) {
    if (arr_a[i] == num) {
      cout << "Position of " << num << " is " << i << endl;
      break;
    }
  }
  return 0;
}