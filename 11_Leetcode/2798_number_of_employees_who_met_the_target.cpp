#include <iostream>
#include <vector>
using namespace std;
int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target) {
  int count = 0;

  for (int i = 0; i < hours.size(); i++) {
    if (hours[i] >= target) {
      count++;
    }
  }
  return count;
}
int main() {
  int n;
  cout << "Enter number of employees: ";
  cin >> n;

  vector<int> hours(n);

  cout << "Enter working hours of employees:\n";
  for (int i = 0; i < n; i++) {
    cin >> hours[i];
  }
  int target;
  cout << "Enter target hours: ";
  cin >> target;

  int result = numberOfEmployeesWhoMetTarget(hours, target);

  cout << "Employees who met the target: " << result << endl;

  return 0;
}