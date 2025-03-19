//first negative number in every subarray of window size k
#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
  int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 4;

  int i=0, j=0;
  deque<int> dq;
  vector<int> ans;
  while(j<n){
    if(arr[j] < 0){
      dq.push_back(arr[j]);
    }
    if(j-i+1 < k){
      j++;
    }
    else if(j-i+1 == k){
      if(dq.empty()) ans.push_back(0);
      else{
        ans.push_back(dq.front());
        if(arr[i] == dq.front()) dq.pop_front();
      }
      j++;
      i++;
    }
  }
  cout<<"first negative number of each subarray of window size k: ";
  for(int i=0;i<ans.size();i++){
    cout<< ans[i]<<" ";
  }
  return 0;
}