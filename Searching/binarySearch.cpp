#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,8,9,45,65,85,98};//target array must be sorted
    int target;//time complexity = O(log n)
    cout<<"Enter target element: ";
    cin>>target;
    bool flag;
    int low = 0, high = sizeof(arr)/sizeof(arr[0]);
    while(low<=high){
        int mid = low + (high - low) / 2; 
        if(arr[mid]==target){
             flag=true;
             break;
             }
        else if(arr[mid]<target) low = mid+1;
        else  high = mid-1;
    }
    if(flag ==true) cout<<"target exist";
    else cout<<"target does not exist";
    return 0;
}