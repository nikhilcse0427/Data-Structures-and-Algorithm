/*Write a program to print the transpose of
the matrix entered by the user and store it in a new
matrix.*/
#include<iostream>
using namespace std;
int main(){
    int arr1[2][3]={{1,2,3},{4,5,6}};
    int arr2[3][2]={{1,4},{5,6},{8,9}};
    for(int i = 0;i<2;i++){
        for(int j=0;j<3;j++){
            int arr[i][j];
            arr[i][j]=arr1[i][j] + arr2[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}