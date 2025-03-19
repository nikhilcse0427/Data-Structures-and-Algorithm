#include<iostream>
using namespace std;
int main(){
    int arr[]={8,4,1,2,5,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}