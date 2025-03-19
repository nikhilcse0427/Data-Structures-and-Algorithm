/* Leetcode 1005 */
#include<iostream>
#include<queue>
using namespace std;
int main(){
  
  class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) { //0(k(log(n)+o(n)))
        priority_queue<int, vector<int>, greater<int>>pq(nums.begin(),nums.end());
        int sum = 0; //o(n)
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        while(k>0){ //o(klog(n))
            int el = pq.top();
            if(el == 0){
                break;
            }
            pq.pop();
            sum -= el;
            pq.push(-el);
            sum += (-el);
            k--;
        }
        return sum;
    }
};
}