#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,5,2,3,4};
    int* ptr = arr;
    cout<< ptr<<endl;
    int* ptr1 = &arr[0];
    cout<<ptr1;
    return 0;
}
