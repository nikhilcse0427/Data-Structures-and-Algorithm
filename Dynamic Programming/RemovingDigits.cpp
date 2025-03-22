/**
CSES Problem Set
Removing Digits

You are given an integer n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0?

Input: The only input line has an integer n.

Output: Print one integer: the minimum number of steps.

Example
Input: 27
Output: 5

Explanation: An optimal solution is 27 -> 20 -> 18 -> 10 ->  9 -> 0.
*/

#include<iostream>
using namespace std;
#include<vector>
#include<climits>
vector<int> dp;
vector<int> getDigits(int n){
  vector<int> digits;
  while(n > 0){
    if(n%10 != 0)digits.push_back(n%10);
    n /= 10;
  }
  return digits;
}
int f(int n){
  if(n==0) return 0;
  if(n <= 9) return 1;
  if(dp[n] != -1) return dp[n];
  int result = INT_MAX;
  vector<int> d = getDigits(n);
  for(int i=0;i<d.size();i++){
    result = min(result, f(n-d[i]));
  }
  return dp[n] = 1 + result;
}
int main(){
  int n;
  cin>>n;
  dp.clear();
  dp.resize(1000005, -1);
  cout<<f(n);
  return 0;
}