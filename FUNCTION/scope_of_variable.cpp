#include<iostream>
using namespace std;
void address(){
    int x,y;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Address of y: "<<&y<<endl;
}
int main(){
    int x=9, y=10;
    cout<<"Address of x: "<<&x<<endl;
    cout<<"Address of y: "<<&y<<endl;
    address();
    return 0;
}