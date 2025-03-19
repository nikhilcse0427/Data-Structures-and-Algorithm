#include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[n+1]={6,3,2,4,1,7,1,5};
    for(int i=0;i<n+1;i++){
        for(int j = i+1;j<n+1;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
            }
        }
    }
    return 0;
}