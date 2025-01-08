#include <iostream>
using namespace std;

// Function to solve the 0/1 Knapsack Problem
int knapsack(int weights[], int profits[], int n, int capacity) {
    // Create a DP table using a 2D array
    int dp[100][100] = {0}; // Assuming maximum n and capacity are less than 100

    // Fill the DP table
    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + profits[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Return the maximum profit
    return dp[n][capacity];
}

int main() {
    // Input: weights and profits of items
    int weights[] = {2, 3, 4, 5};
    int profits[] = {3, 4, 5, 6};
    int capacity = 5;
    int n = sizeof(weights) / sizeof(weights[0]);

    // Call the knapsack function and print the result
    cout << "Maximum Profit: " << knapsack(weights, profits, n, capacity) << endl;
    return 0;
}
