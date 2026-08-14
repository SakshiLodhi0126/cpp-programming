#include <iostream>
#include <string>
#include <unordered_map>
#include <cmath> // For abs()

using namespace std;

// Easy standalone function for the Fraction to Decimal logic
string fractionToDecimal(int numerator, int denominator) {
    if (numerator == 0) return "0";
    
    string result = "";
    
    // 1. Handle the sign (XOR checks if exactly one is negative)
    if ((numerator < 0) ^ (denominator < 0)) {
        result += "-";
    }
    
    // 2. Convert to long long to prevent overflow from INT_MIN (-2147483648)
    long long num = abs((long long)numerator);
    long long den = abs((long long)denominator);
    
    // 3. Calculate the integer part
    result += to_string(num / den);
    long long remainder = num % den;
    
    if (remainder == 0) {
        return result; // No fractional part
    }
    
    // 4. Calculate the fractional part
    result += ".";
    unordered_map<long long, int> remainderMap;
    
    while (remainder != 0) {
        // If we've seen this remainder before, we found a repeating cycle
        if (remainderMap.find(remainder) != remainderMap.end()) {
            result.insert(remainderMap[remainder], "(");
            result += ")";
            break;
        }
        
        // Store the position of this remainder
        remainderMap[remainder] = result.length();
        
        // Multiply by 10 to get the next digit
        remainder *= 10;
        result += to_string(remainder / den);
        remainder %= den;
    }
    
    return result;
}

int main() {
    int numerator, denominator;
    
    // 1. Get the numerator
    cout << "Enter the numerator: ";
    cin >> numerator;
    
    // 2. Get the denominator
    cout << "Enter the denominator: ";
    cin >> denominator;
    
    // Check for division by zero
    if (denominator == 0) {
        cout << "Error: Denominator cannot be zero." << endl;
        return 1;
    }
    
    // 3. Call the logic and print the result
    cout << "\nOutput: " << fractionToDecimal(numerator, denominator) << endl;

    return 0;
}