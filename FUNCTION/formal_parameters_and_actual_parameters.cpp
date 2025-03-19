#include<iostream>
using namespace std;
void address(int x, int y){
    cout<<"address of main x = "<<&x<<endl;
    cout<<"address of main y = "<<&y;

}
int main(){
    int x = 9, y = 10;
    cout<<"address of main x = "<<&x<<endl;
    cout<<"address of main y = "<<&y<<endl;
    address(9,10);
    return 0;
}