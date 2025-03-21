// Leetcode 1155
#include <iostream>
#include <vector>
using namespace std;

#define ll long long int
#define mod 1000000007

class Solution
{
public:
    vector<vector<ll>> dp;
    int f(int n, int k, int tar)
    {
        if (n == 0 && tar != 0)
            return 0;
        if (n == 0 && tar == 0)
            return 1;
        if (dp[n][tar] != -1)
            return dp[n][tar];
        ll sum = 0;
        for (int v = 1; v <= k; v++)
        {
            if (tar - v < 0)
                continue;
            sum = (sum % mod + f(n - 1, k, tar - v) % mod) % mod;
        }
        return dp[n][tar] = sum % mod;
    }
    int numRollsToTarget(int n, int k, int target)
    {
        dp.clear();
        dp.resize(35, vector<ll>(1005, -1));
        return f(n, k, target);
    }
};

int main()
{
    int n, k, target;
    cout << "Enter the number of dice (n): ";
    cin >> n;
    cout << "Enter the number of faces on each die (k): ";
    cin >> k;
    cout << "Enter the target sum: ";
    cin >> target;

    Solution sol;
    int result = sol.numRollsToTarget(n, k, target);
    cout << "Number of ways to get the target sum: " << result << endl;

    return 0;
}