#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,9,10};
    int* ptr1 = arr;
    for(int i =0;i<5;i++){
        cout<<*ptr1<<" ";
        ptr1++;
    }
    return 0;
}