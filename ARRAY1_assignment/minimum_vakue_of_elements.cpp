//Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of elements of array: ";
    cin>>n;
    int i,arr[n];
    for(i=0;i<=n-1;i++){
        cout<<"Enter value of "<<"arr"<<"["<<i<<"] = ";
        cin>>arr[i];
    }
    int min = arr[0];
    for(i=1;i<=n-1;i++){
        if(min > arr[i]){
            min = arr[i];
        }
        else{
            min;
        }
    }
    cout<<min;
    return 0;
}