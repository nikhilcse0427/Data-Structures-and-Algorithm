#include<iostream>
using namespace std;
void fun(int x = 9, int y = 10){
    cout<<x<<" "<<y;
}
int main(){
    fun(10,10);
    return 0;
}