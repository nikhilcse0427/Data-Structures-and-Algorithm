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
    cout<<"enter num to be deleted: ";
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            indx=i;
        }
    }
    n--;
    for(int i=indx;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}