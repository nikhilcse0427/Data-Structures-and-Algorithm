#include<iostream>
using namespace std;
#include<vector>
#include<climits>
vector<int> coins;
vector<int> dp;
int f(int x){
  if(x==0) return 0;
  if(dp[x]!=-2) return dp[x];
  int result = INT_MAX;
  for(int i=0;i<coins.size();i++){
    if(x-coins[i]<0) continue;
    result = min(result, f(x-coins[i]));
  }
  if(result == INT_MAX) return dp[x] = INT_MAX;
  return dp[x] = 1 + result;
}
int main(){
  dp.clear();
  dp.resize(1000005, -2);
  int n, x;
  cin>>n>>x;
  coins.clear();
  coins.resize(n, 0);
  for(int i=0;i<n;i++){
    cin>>coins[i];
  }
  cout<<f(x);
  return 0;
}