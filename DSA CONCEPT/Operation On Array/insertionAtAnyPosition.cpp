#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[20];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    int indx;
    cout<<"enter num to be inserted: ";
    cin>>num;
    cout<<"enter  index: ";
    cin>>indx;
    for(int i=n;i>indx;i--){
        arr[i]=arr[i-1];
    }
    arr[indx]=num;
    cout<<"after insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}