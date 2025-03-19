/*Write a program to print sum of all the
elements of a 2D matrix.*/
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter value of m: ";
    cin>>m;
    cout<<"Enter value of n: ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){template <typename _InputIter>
        for(int j=0;j<n;j++){
            cout<<"Enter value of arr"<<"["<<i<<"]"<<"["<<j<<"]"<<" = ";
            cin>>arr[i][j];
        }
    }
    cout<<"ARRAY";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"SUM";
    cout<<endl;
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k=arr[i][j];
            sum+=k;
        }
    }
    cout<<sum;
    return 0;
}