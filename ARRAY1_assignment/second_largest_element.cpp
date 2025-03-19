// Find the second largest element in the given Array in one pass.
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
    int max = arr[0];
    for(i=1;i<=n-1;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        else{
            max;
        }
    }
    cout<<"max = "<<max<<endl;
    int x=arr[0];
    for(i=1;i<=n-1;i++){
        if(x<arr[i] && arr[i] != max){
            x=arr[i];
        }
        else{
            x;
        }
    }
    cout<<"second max: "<<x;
    return 0;
}