#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,5};
    //address of &arr[0]=&arr
    cout<<"address of arr[0]: "<<&arr[0]<<endl;
    cout<<"address of arr: "<<&arr;
    return 0;
}