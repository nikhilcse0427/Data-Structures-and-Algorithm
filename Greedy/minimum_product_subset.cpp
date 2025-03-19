#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minProductSubset(vector<int> &nums, int n){
  int negativeCount = 0, positiveCount = 0, zeroCount = 0;
  int positiveProduct = 1, negativeProduct = 1, maxNegative = INT_MIN;
  int minElement = *min_element(nums.begin(), nums.end());
  
  for(int i = 0; i < n; i++){
    if(nums[i] == 0) {
      zeroCount++;
    } else if(nums[i] < 0){
      maxNegative = max(maxNegative, nums[i]);
      negativeProduct *= nums[i];
      negativeCount++;
    } else if(nums[i] > 0){ 
      positiveProduct *= nums[i];
      positiveCount++;
    }
  }
  
  if(negativeCount == 0){
    if(zeroCount > 0) return 0;
    return minElement;
  } else {
    if(negativeCount % 2 == 0){
      return negativeProduct * positiveProduct / maxNegative;
    } else {
      return negativeProduct * positiveProduct;
    }
  }
}

int main(){
  vector<int> v{8, -1, 9, -2, -7, 8};
  int n = v.size();
  int result = minProductSubset(v, n);
  cout << "Minimum product subset: " << result;
  return 0;
}