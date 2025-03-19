#include<iostream>
using namespace std;
int  min(int x, int y){
    int a;
    if(x > y){
        a=y;
    }
    else{
        a=x;
    }
      return a;
}
int main(){
    int x, y;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    cout<<"min = "<<min(x, y);
    return 0;
}