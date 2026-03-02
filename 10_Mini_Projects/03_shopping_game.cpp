#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> m >> n;
    if (m < n) {
      cout << "Harshit" << endl;
    } else {
      cout << "Aayush" << endl;
    }
  }
  return 0;
}