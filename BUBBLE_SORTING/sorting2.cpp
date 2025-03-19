#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,1,4,3,2};
    int n=5;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
        for(int j=0;j<5;j++){
            cout<<arr[j]<<" ";
            }1/
01  
    return 0;
}