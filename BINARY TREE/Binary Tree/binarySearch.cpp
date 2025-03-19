#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    int left =0, right = n-1;
    bool flag;
    for(int i=0;i<n;i++){
        int mid=left+(right-left)/2;
        if(arr[mid]>target) right=mid-1;
        else if(arr[mid]<target) left =mid+1;
        else flag= true;
    }
    cout<<flag;
}