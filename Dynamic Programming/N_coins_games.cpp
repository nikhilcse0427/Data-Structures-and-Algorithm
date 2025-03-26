#include <iostream>
#include <vector>
using namespace std;

// Memoization table
vector<int> dp;

// Recursive function to determine the winner
bool f(int n, int k, int l) {
    if (n < 0) return 0;  // Invalid state
    if (n == 0) return 0; // If no coins are left, the current player loses

    // If already computed, return the stored result
    if (dp[n] != -1) return dp[n];

    // Check if you can move to a losing position
    bool result = (f(n - 1, k, l) == 0 || (n >= k && f(n - k, k, l) == 0) || (n >= l && f(n - l, k, l) == 0)) ? 1 : 0;

    // Store the result in dp
    dp[n] = result;
    return result;
}

int main() {
    int n, k, l;
    cin >> n >> k >> l;

    // Resize the dp array for the maximum possible value of `coins`
    dp.resize(10005, -1);

    cout << "Enter coins array elements: ";
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // Output
    for (int j = 0; j < n; j++) {
        bool ans = f(coins[j], k, l);
        (ans == 1) ? cout << "A" : cout << "B";
    }
    cout << endl;

    return 0;
}