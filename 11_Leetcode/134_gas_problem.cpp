#include <iostream>
#include <vector>
using namespace std;

int startStation(vector<int> &gas, vector<int> &cost) {
  int total = 0;
  int remainingGas = 0;
  int ans = 0;

  for (int i = 0; i < gas.size(); i++) {
    total += (gas[i] - cost[i]);
    remainingGas += (gas[i] - cost[i]);

    if (remainingGas < 0) {
      remainingGas = 0;
      ans = i + 1;
    }
  }

  if (total >= 0) {
    return ans;
  }
  return -1;
}

int main() { return 0; }