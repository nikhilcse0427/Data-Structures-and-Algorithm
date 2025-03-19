#include<iostream>
using namespace std;
void hanoi(int n,char a, char b, char c){    //(1)
    if(n==0)return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;//FOR FIRST(1)
    hanoi(n-1,b,a,c);
}
int main(){
    /*4 CHTACTR TO BE PASSED
    NUM OF DISK, SOURCE, HELPER AND DESTINATION*/
    int n=2;
    hanoi(n,'A','B','C');
    return 0;
}