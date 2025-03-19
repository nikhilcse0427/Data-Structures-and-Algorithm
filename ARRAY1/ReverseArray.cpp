//Reverse array without using extra space
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={8,4,1,2,5,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=size-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int k=0;k<size;k++){
        cout<<arr[k];
    }
    return 0;
}