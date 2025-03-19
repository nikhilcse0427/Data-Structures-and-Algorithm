// find maxSum from arr with window size k
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  int i=0, j=0; // i->starting idx, j->end idx
  int maxSum = INT_MIN;
  int sum = 0;
  while(j<n){
    sum += arr[j];
    if(j-i+1 < k){
      j++;
    }
    else if(j-i+1 == k){
      maxSum = max(sum, maxSum);
      sum -= arr[i];
      j++;
      i++;
    }
  }
  cout<<"Max sum of subarray of window size k : "<<maxSum;

  return 0;
}