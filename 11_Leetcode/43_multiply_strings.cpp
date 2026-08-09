#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to multiply two string numbers
string multiplyStrings(string num1, string num2) {
    // If either number is zero, return "0"
    if (num1 == "0" || num2 == "0") {
        return "0";
    }

    int m = num1.length();
    int n = num2.length();
    vector<int> result(m + n, 0);

    // Multiply every digit of num1 with every digit of num2 from right to left
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int mul = digit1 * digit2;

            // Position where product should be added
            int p1 = i + j;      // Carry position
            int p2 = i + j + 1;  // Current position

            int sum = mul + result[p2];

            result[p2] = sum % 10;   // Keep the single digit
            result[p1] += sum / 10;  // Pass carry to the left
        }
    }

    // Build the output string, skipping leading zeros
    string product = "";
    for (int num : result) {
        if (!(product.empty() && num == 0)) {
            product += to_string(num);
        }
    }

    return product.empty() ? "0" : product;
}

int main() {
    string num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    string ans = multiplyStrings(num1, num2);

    cout << "Product: " << ans << endl;

    return 0;
}