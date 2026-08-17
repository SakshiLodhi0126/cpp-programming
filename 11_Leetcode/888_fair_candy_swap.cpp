#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_set>

using namespace std;

// Procedural function to solve the candy swap
vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int sumA = 0;
    for (int x : aliceSizes) {
        sumA += x;
    }
    
    int sumB = 0;
    unordered_set<int> bobSet;
    for (int x : bobSizes) {
        sumB += x;
        bobSet.insert(x);
    }
    
    int diff = (sumB - sumA) / 2;
    
    for (int x : aliceSizes) {
        int targetY = x + diff;
        // If Bob has the exact candy size needed, return the pair
        if (bobSet.count(targetY)) {
            return {x, targetY};
        }
    }
    
    return {};
}

int main() {
    int n, m;
    
    // Read the number of candy boxes Alice has
    if (!(cin >> n)) return 0;
    vector<int> aliceSizes(n);
    for (int i = 0; i < n; ++i) {
        cin >> aliceSizes[i];
    }
    
    // Read the number of candy boxes Bob has
    cin >> m;
    vector<int> bobSizes(m);
    for (int i = 0; i < m; ++i) {
        cin >> bobSizes[i];
    }
    
    // Compute and print the result
    vector<int> ans = fairCandySwap(aliceSizes, bobSizes);
    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << "\n";
    }
    
    return 0;
}