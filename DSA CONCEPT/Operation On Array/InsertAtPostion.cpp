#include<iostream>
using namespace std;
int main(){
    int n,indx,num;
    cout<<"enter the length of array: ";
    cin>>n;
    cout<<"enter index and num insert: ";
    cin>>indx>>num;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n++;
    for(int i=indx;i<=n;i++){
        arr[i+1]=arr[i];
    }
    arr[indx]=num;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}