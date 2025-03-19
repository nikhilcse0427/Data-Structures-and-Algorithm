#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1};
    for(auto el : arr){
        cout<<el<<" ";
    }
    int n=5;
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minIdx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){ 
                min = arr[j];
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    cout<<endl;
    for(auto el : arr){
        cout<<el<<" ";
    }
    return 0;
}