#include<iostream>
using namespace std;
#include<vector>
#include<climits>
#define inf INT_MAX
vector<int> dp;
int f(int n){
  if(n==1) return 0;
  if(n==2) return 1;
  if(n==2 || n==3) return n;
  if(dp[n] != -1) return dp[n];
  return dp[n] = 1 + min(f(n-1), min((n%2==0)?f(n/2):inf, (n%3==0)?f(n/3):inf));
}

int main(){
  int n;
  cout<<"Enter any positve number: ";
  cin>>n;
  dp.clear();
  dp.resize(n+5, -1);
  cout<<"Output: "<<f(n);
  return 0;
}