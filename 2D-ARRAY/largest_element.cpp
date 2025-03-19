/*rite a C++ program to find the largest 
element of a given 2D array of integers.*/
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
    int max =arr[0][0];
    for(int i=0;i<4;i++){
        for(int j=1;j<3;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<"max: "<<max;
    return 0;
}