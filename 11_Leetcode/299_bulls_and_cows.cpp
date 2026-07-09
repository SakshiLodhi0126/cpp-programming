#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string secret, guess;
    
    // Take user input
    cout << "Enter secret: ";
    cin >> secret;
    cout << "Enter guess: ";
    cin >> guess;

    int bulls = 0;
    int cows = 0;
    
    // Frequency arrays to track remaining unmatched digits (0-9)
    vector<int> secret_counts(10, 0);
    vector<int> guess_counts(10, 0);

    // First Pass: Count Bulls and populate frequencies for non-bulls
    for (int i = 0; i < secret.length(); i++) {
        if (secret[i] == guess[i]) {
            bulls++;
        } else {
            // Convert char digit (e.g., '5') to integer index (5)
            secret_counts[secret[i] - '0']++;
            guess_counts[guess[i] - '0']++;
        }
    }

    // Second Pass: Count Cows
    // For each digit 0-9, the number of cows is the minimum overlap
    for (int i = 0; i < 10; i++) {
        cows += min(secret_counts[i], guess_counts[i]);
    }

    // Print the hint output
    cout << "Hint: " << bulls << "A" << cows << "B" << endl;

    return 0;
}