#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;
int main() {

  // initialization
  vector<int> v;

  // updation
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.pop_back();
  cout << v.size() << endl;
  cout << v.capacity() << endl;

  // print
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  cout << v.front() << endl;
  cout << v.back() << endl;

  vector<int> a;
  a.pop_back();

  // reverse
  reverse(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }

  // insert
  a.insert(a.end() - 1, 6);
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  vector<int> arr(5, 1);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  // int n
  // cin >>n;
  // vector<int> a(n);
  return 0;
}