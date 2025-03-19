#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;

  int i=0,j=0;
  int sum = 0;
  int ans = INT_MIN;
  while(j<n){
    sum += arr[j];
    if(j-i+1 < k){
      j++;
    }
    else if(j-i+1 == k){
      ans = max(ans, sum);
      sum -= arr[i];
      i++;
      j++;
    }
  }
  cout<<ans;
  return 0;
}