/**
 x->target sum reqired
 all possible ways we cax get x by throwixg dices
 */

 #include<iostream>
 #include<vector>
 #define mod 1000000007
 #define ll long long int 
 using namespace std;
 
 vector<ll> dp(1000005, -1);
 ll f(int x) {
     if (x == 0) return 1;
     if (dp[x] != -1) return dp[x];
     
     ll result = 0; 
     for (int i = 1; i <= 6; i++) {
         if(x-i < 0) break;
        //  result = (result % mod + f(x - i) % mod) % mod;
        result = (result  + f(x - i) ) % mod;
     }
     
     return dp[x] = result;
 }
 
 int main() {
     int x;
     cin >> x;
     cout << f(x);
     return 0;
 }