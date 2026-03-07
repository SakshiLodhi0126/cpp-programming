#include <iostream>
using namespace std;

int main() {

  // 1. Declaration only
  int arr1[5];
  arr1[0] = 10;
  arr1[1] = 20;
  arr1[2] = 30;
  arr1[3] = 40;
  arr1[4] = 50;

  cout << "1. Declaration only: ";
  for (int i = 0; i < 5; i++)
    cout << arr1[i] << " ";
  cout << endl;

  // 2. Declaration + initialization
  int arr2[5] = {1, 2, 3, 4, 5};

  cout << "2. Full initialization: ";
  for (int i = 0; i < 5; i++)
    cout << arr2[i] << " ";
  cout << endl;

  // 3. Input using loop
  int arr3[5];
  cout << "Enter 5 numbers: ";
  for (int i = 0; i < 5; i++)
    cin >> arr3[i];

  cout << "3. Loop input: ";
  for (int i = 0; i < 5; i++)
    cout << arr3[i] << " ";
  cout << endl;

  // 4. Size automatically detected
  int arr4[] = {6, 7, 8, 9, 10};

  cout << "4. Automatic size: ";
  for (int i = 0; i < 5; i++)
    cout << arr4[i] << " ";
  cout << endl;

  // 5. Initialize all with 0
  int arr5[5] = {0};

  cout << "5. All zeros: ";
  for (int i = 0; i < 5; i++)
    cout << arr5[i] << " ";
  cout << endl;

  // 6. Partial initialization
  int arr6[5] = {1, 2, 3};

  cout << "6. Partial initialization: ";
  for (int i = 0; i < 5; i++)
    cout << arr6[i] << " ";
  cout << endl;

  return 0;
}