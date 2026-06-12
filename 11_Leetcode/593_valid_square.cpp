#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int distanceSquared(vector<int> p1, vector<int> p2) {
    int dx = p1[0] - p2[0];
    int dy = p1[1] - p2[1];

    return dx * dx + dy * dy;
}

bool validSquare(vector<int> p1,
                 vector<int> p2,
                 vector<int> p3,
                 vector<int> p4) {

    vector<int> d;

    // Find all 6 distances
    d.push_back(distanceSquared(p1, p2));
    d.push_back(distanceSquared(p1, p3));
    d.push_back(distanceSquared(p1, p4));
    d.push_back(distanceSquared(p2, p3));
    d.push_back(distanceSquared(p2, p4));
    d.push_back(distanceSquared(p3, p4));

    // Sort distances
    sort(d.begin(), d.end());

    // Check square conditions
    return (d[0] > 0 &&
            d[0] == d[1] &&
            d[1] == d[2] &&
            d[2] == d[3] &&
            d[4] == d[5]);
}

int main() {

    vector<int> p1(2), p2(2), p3(2), p4(2);

    cout << "Enter coordinates of p1: ";
    cin >> p1[0] >> p1[1];

    cout << "Enter coordinates of p2: ";
    cin >> p2[0] >> p2[1];

    cout << "Enter coordinates of p3: ";
    cin >> p3[0] >> p3[1];

    cout << "Enter coordinates of p4: ";
    cin >> p4[0] >> p4[1];

    if (validSquare(p1, p2, p3, p4))
        cout << "True";
    else
        cout << "False";

    return 0;
}