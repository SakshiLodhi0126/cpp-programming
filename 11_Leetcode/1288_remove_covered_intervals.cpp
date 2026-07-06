#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator function for sorting
bool compareIntervals(const vector<int>& a, const vector<int>& b) {
    if (a[0] != b[0]) {
        return a[0] < b[0]; // Sort by start time in ascending order
    }
    return a[1] > b[1];     // If start times match, sort by end time in descending order
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter the intervals (start and end for each):\n";
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    // Sort the intervals using our custom comparator
    sort(intervals.begin(), intervals.end(), compareIntervals);

    int count = 0;
    int right = 0;

    // Track the remaining intervals
    for (int i = 0; i < n; i++) {
        if (intervals[i][1] > right) {
            count++;
            right = intervals[i][1];
        }
    }

    cout << "Number of remaining non-covered intervals: " << count << endl;

    return 0;
}