#include<iostream>
#include<vector>
using namespace std;

// vector<int> dp;
// int function(int n){
//    dp[0]=0;
//    dp[1]=1;
//    for(int i=2;i<=n;i++){
//     dp[i] = dp[i-1] + dp[i-2];
//    }
//    return dp[n];
// }

int function(int n){
  if(n==0 || n==1)  return n;
  int i = 2;
   int c;
   int a=0;
   int b=1;
   while(i<=n){
     c = a+b;
    a=b;
    b=c;
    i++;
   }
   return c;
}

int main(){
  int n;
  cout<<"Enter any number n: ";
  cin>>n;
  // dp.clear();//it will clear all the garbage value
  // dp.resize(n+1,-1); //-1 means index not used 
  cout<<"Value of nth fibonacci series: "<<function(n);

  return 0;
}