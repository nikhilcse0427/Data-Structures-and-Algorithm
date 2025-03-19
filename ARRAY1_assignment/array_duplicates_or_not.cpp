//Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of elements: ";
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<=n-1;i++){`
        cout<<"Enter value of arr"<<"["<<i<<"] = ";
        cin>>arr[i];
    }
    int x,y;
    bool z = false;
    for(x=0;x<=n-1;x++){
        for(y=0;y<=n-1;y++){
            if(arr[x]==arr[y]){
                z=true;
                break;
            }

        }
    }
    if(z=true){
        cout<<"Duplicate is present in the array";
    }
    else{
        cout<<"Duplicate is not present in the array";
    }
    return 0;
}