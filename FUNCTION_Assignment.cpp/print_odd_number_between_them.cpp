/*Given two numbers a and b, write a function to print 
all odd numbers between them.*/
#include<iostream>
using namespace std;
int between(int a, int b){
    int i;
    for(i=a+1;i<b;i++){
        if(i % 2 != 0){
        cout<<i<<" ";
        }
    }
}
int main(){
    int a, b;
    cout<<"enter any num: ";
    cin>>a;
    cout<<"enter any num: ";
    cin>>b;
    between(a,b);
    return 0;  
}
