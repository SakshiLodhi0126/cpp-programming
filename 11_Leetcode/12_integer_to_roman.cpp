#include <iostream>
#include <string>

using namespace std;

string intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string result = "";
    
    for (int i = 0; i < 13; ++i) {
        while (num >= values[i]) {
            num -= values[i];
            result += symbols[i];
        }
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    string roman = intToRoman(num);
    cout << "Roman numeral: " << roman << endl;
    
    return 0;
}