#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> h; // h -> height
int k;
vector<int>dp;
// vector<int>dp(100005,-1) competitive programmer

int result(int i) {
    if (i >= h.size()) return INT_MAX;
    if (i == h.size() - 1) return 0;
    int ans = INT_MAX;
    if(dp[i]!=-1) return dp[i];
    for (int j = 1; j <= k; j++) {
        if (i + j < h.size()) {
            ans = min(ans, abs(h[i] - h[i + j]) + result(i + j));
        }
    }
    return dp[i] = ans;
}

int main() {
    int n; // n -> number of stones, k -> max jump
    // cout << "Enter value of n and k: ";
    cin >> n >> k;
    h.resize(n); // Resize the vector to hold n elements
    dp.resize(n-1,-1); //-1 indicate that value not computed yet
    // cout << "Enter height of stones: ";
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cout << "Output is: " << result(0) << endl;
    return 0;
}
