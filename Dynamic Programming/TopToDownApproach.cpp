#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;
int function(int n){
  if(n == 0 || n == 1) return n;
  if(dp[n] != -1) return dp[n];
  return dp[n] =function(n-1) + function(n-2);
}

int main(){
  int n;
  cout<<"Enter any number n: ";
  cin>>n;
  dp.clear();//it will clear all the garbage value
  dp.resize(n+1,-1); //-1 means index not used 
  cout<<"Value of nth fibonacci series: "<<function(n);

  return 0;
}