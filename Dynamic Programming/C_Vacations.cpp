#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<vector<int>> activities;
vector<vector<int>> dp;
int ans=0;
int main(){
  int n; // num. of vacation days
  cout<<"Enter num. of vacation days: ";
  cin>>n;
  activities.resize(n, vector<int>(3));
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>activities[i][j];
    }
  }
  dp.resize(n, vector<int>(3, -1));
    //Base Case
    dp[0][0] = activities[0][0];
    dp[0][1] = activities[0][1];
    dp[0][2] = activities[0][2];

    //Top Down Approach
    for(int i=1;i<n;i++){
      dp[i][0] = activities[i][0] + max(dp[i-1][1], dp[i-1][2]);
      dp[i][1] = activities[i][1] + max(dp[i-1][0], dp[i-1][2]);
      dp[i][2] = activities[i][2] + max(dp[i-1][0], dp[i-1][1]);
    }
    cout<<max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    return 0;
}