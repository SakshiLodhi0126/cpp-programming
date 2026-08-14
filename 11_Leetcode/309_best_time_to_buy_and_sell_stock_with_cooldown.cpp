#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Easy standalone function for the Buy/Sell Stock with Cooldown logic
int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;
    
    // Initial states on day 0
    int hold = -prices[0]; // If we buy on day 0, our profit is -prices[0]
    int sold = 0;          // We can't sell on day 0, so profit is 0
    int rest = 0;          // Doing nothing on day 0 yields 0 profit
    
    for (int i = 1; i < prices.size(); i++) {
        // Keep previous states to calculate new ones simultaneously
        int prev_hold = hold;
        int prev_sold = sold;
        int prev_rest = rest;
        
        // Calculate today's states based on yesterday's states
        hold = max(prev_hold, prev_rest - prices[i]);
        sold = prev_hold + prices[i];
        rest = max(prev_rest, prev_sold);
    }
    
    // The maximum profit will be either in the 'sold' state or 'rest' state.
    return max(sold, rest);
}

int main() {
    int n;
    
    // 1. Get the number of days (array size) from the user
    cout << "Enter the number of days: ";
    cin >> n;
    
    // Handle edge case for 0 days
    if (n <= 0) {
        cout << "No prices to evaluate." << endl;
        return 0;
    }

    vector<int> prices(n);
    
    // 2. Get the stock prices from the user
    cout << "Enter the " << n << " stock prices separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    // 3. Call the logic and print the result
    cout << "\nMaximum Profit: " << maxProfit(prices) << endl;

    return 0;
}