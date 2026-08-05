#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to convert 1-based column number to Excel column title
string convertToTitle(int columnNumber) {
    string result = "";
    
    while (columnNumber > 0) {
        columnNumber--; // Adjust to 0-based indexing
        
        char ch = 'A' + (columnNumber % 26);
        result += ch;
        
        columnNumber /= 26;
    }
    
    // Reverse because digits were collected from right to left
    reverse(result.begin(), result.end());
    
    return result;
}

int main() {
    int columnNumber;
    
    cout << "Enter column number: ";
    cin >> columnNumber;
    
    string title = convertToTitle(columnNumber);
    
    cout << "Excel Column Title: " << title << endl;
    
    return 0;
}