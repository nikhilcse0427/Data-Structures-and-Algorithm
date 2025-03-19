#include<iostream>
#include<algorithm>
#include<limits.h>//<climits>
using namespace std;
int main(){
    int arr[]={8,4,1,2,5,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    /*int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>smax && arr[i]!=max) smax=arr[i];
    }
    cout<<smax;*/


}