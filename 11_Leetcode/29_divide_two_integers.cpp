#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

// Function to perform division without *, /, or %
int divideIntegers(int dividend, int divisor) {
    // Edge case: overflow when -2147483648 is divided by -1
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    // Determine if the result should be negative
    bool isNegative = (dividend < 0) ^ (divisor < 0);

    // Convert both inputs to positive long long to handle overflow during bit shifts
    long long n = abs((long long)dividend);
    long long d = abs((long long)divisor);

    long long quotient = 0;

    // Exponentially subtract using bit shifting
    while (n >= d) {
        long long tempDivisor = d;
        long long count = 1;

        // Double the divisor until it exceeds the remaining dividend
        while (n >= (tempDivisor << 1)) {
            tempDivisor <<= 1;
            count <<= 1;
        }

        n -= tempDivisor;
        quotient += count;
    }

    return isNegative ? -quotient : quotient;
}

int main() {
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Error: Division by zero is undefined." << endl;
        return 0;
    }

    int result = divideIntegers(dividend, divisor);

    cout << "Result: " << result << endl;

    return 0;
}