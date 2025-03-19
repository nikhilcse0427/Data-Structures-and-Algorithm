/*Write a program to store roll number and 
marks obtained by 4 students side by side in a 
matrix.*/
#include<iostream>
using namespace std; 
int main(){
    int arr[4][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<"enter value for arr"<<"["<<i<<"]"<<"["<<j<<"]"<<" = ";
            cin>>arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    cout << "The 2D array is:" <<endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << std::endl;
    }
    return 0;
}