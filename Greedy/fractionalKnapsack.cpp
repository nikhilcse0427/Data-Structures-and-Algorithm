#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//custom sort
bool comp(const pair<int, int> &item1, const pair<int,int> &item2){
    double r1 = (item1.first*1.0)/(item1.second*1.0);
    double r2 = (item2.first*1.0)/(item2.second*1.0);
    return r1>r2;
}

//function to calculate the maximum value that can be obtained
double fractionalKnapsack(vector<int> &profit, vector<int> &weight, int n, int w){
    vector<pair<int, int>> arr;
    for(int i=0;i<n;i++){
        arr.push_back({profit[i],weight[i]});
    }
    sort(arr.begin(), arr.end(), comp);
    double maxProfit = 0;
    for(int j=0;j<n;j++){
        if(arr[j].second <= w){
            maxProfit += arr[j].first;
            w -= arr[j].second;
        }
        else{
            maxProfit +=((arr[j].first*1.0) / (arr[j].second*1.0)) * w;
            w=0;
            break;
        }
    }
    return maxProfit;
}

int main(){
    vector<int>profit = {15,27,12,21,28};
    vector<int>weight = {2,1,4,3,4};

    double result = fractionalKnapsack(profit, weight, 5, 10);
    cout<<result;

    return 0;
}