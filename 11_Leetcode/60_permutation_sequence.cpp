#include <iostream>
#include <vector>
#include <string>

using namespace std;

string getPermutation(int n, int k) {
    vector<int> numbers;
    vector<int> factorial(n, 1);

    // Store numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        numbers.push_back(i);
    }

    // Calculate factorials
    for (int i = 1; i < n; i++) {
        factorial[i] = factorial[i - 1] * i;
    }

    // Convert k to 0-based index
    k--;

    string result = "";

    for (int i = n; i >= 1; i--) {
        int index = k / factorial[i - 1];
        result += to_string(numbers[index]);

        // Remove used number
        numbers.erase(numbers.begin() + index);

        k %= factorial[i - 1];
    }

    return result;
}

int main() {
    int n, k;

    cout << "Enter n and k: ";
    cin >> n >> k;

    cout << "Kth Permutation: " << getPermutation(n, k) << endl;

    return 0;
}