/*Write a function that takes the radius of a circle as an
argument and returns its area.*/
#include<iostream>
using namespace std;
 float area(int r){
    cout<<3.14*r*r;
}
int main(){
    int r;
    cout<<"enter your radius: ";
    cin>>r;
    area(r);
    return 0;
}