#include <iostream>
#include <algorithm> // Required for min() and max()

using namespace std;

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    // Area of first rectangle 
    int area1 = (ax2 - ax1) * (ay2 - ay1); 
    
    // Area of second rectangle 
    int area2 = (bx2 - bx1) * (by2 - by1); 
    
    // Calculate overlap dimensions 
    int overlapWidth = min(ax2, bx2) - max(ax1, bx1); 
    int overlapHeight = min(ay2, by2) - max(ay1, by1); 
    
    // Overlap area 
    int overlapArea = 0; 
    if (overlapWidth > 0 && overlapHeight > 0) {
        overlapArea = overlapWidth * overlapHeight; 
    } 
    
    // Total covered area 
    return area1 + area2 - overlapArea; 
}

int main() {
    int ax1, ay1, ax2, ay2;
    int bx1, by1, bx2, by2;

    // User input for the first rectangle
    cout << "Enter coordinates for Rectangle 1 (ax1 ay1 ax2 ay2): ";
    cin >> ax1 >> ay1 >> ax2 >> ay2;

    // User input for the second rectangle
    cout << "Enter coordinates for Rectangle 2 (bx1 by1 bx2 by2): ";
    cin >> bx1 >> by1 >> bx2 >> by2;

    // Calculate and display the result
    int totalArea = computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2);
    cout << "Total covered area: " << totalArea << endl;

    return 0;
}