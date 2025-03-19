//Write a program to add two matrices
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter value of m: ";
    cin>>m;
    cout<<"Enter value of n: ";
    cin>>n;
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter value of arr1"<<"["<<i<<"]"<<"["<<j<<"]"<<" = ";
            cin>>arr1[i][j];
        }
    }
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter value of arr2"<<"["<<i<<"]"<<"["<<j<<"]"<<" = ";
            cin>>arr2[i][j];
        }
    }
    cout<<"ARRAY 1";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"ARRAY 2";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"ARRAY";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k;
            int arr[i][j];
            arr[i][j]=arr1[i][j] + arr2[i][j];
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}