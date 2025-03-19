//elements of array should be sorted
//time complexity = O(log2 n)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted form: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"enter num to be search: ";
    cin>>num;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==num){
            cout<<"element found at index number: "<<mid;
            break;
        }
        else if(num>arr[mid]){
            low=mid+1;
        }
        else if(num<arr[mid]){
            high=mid-1;
        }
    }
    if(low>high){
    cout<<"element not found";
    }
    return 0;
}