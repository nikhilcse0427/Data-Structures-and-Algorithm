//find largest length subarray of sum k

#include<iostream>
using namespace std;
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 5;

  int i = 0, j = 0;
  int maxLen = 0;
  long long sum = 0;
  while (j < n) {
    sum += arr[j];
    if (sum < k) {
      j++;
    } else if (sum == k) {
      maxLen = max(maxLen, j - i + 1);
      j++;
    } else {
      while (sum > k) {
        sum -= arr[i];
        i++;
      }
      if (sum == k) {
        maxLen = max(maxLen, j - i + 1);
      }
      j++;
    }
  }
  cout << "MaxLength subarray of sum k: " << maxLen;
  return 0;
}