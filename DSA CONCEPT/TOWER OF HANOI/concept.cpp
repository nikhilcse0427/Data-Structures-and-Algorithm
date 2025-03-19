#include<iostream>
using namespace std;
int moves = 0;
void hanoi(int n, char a,char b, char c){
    moves++;
    if(n==1){
        cout<<"Move disc "<<moves<<" times"<<" from "<<a<<"to "<<c;
    }
    else{
        hanoi(n-1, a, c, b);
            cout<<"Move disc "<<moves<<" times"<<"from "<<a<<"to "<<b<<endl;
        hanoi(n-1,b,a,c);

    }
}
int main(){
    int n;
    cout<<"enter the num of disc: ";
    cin>>n;
    hanoi(n,'A','B','C');
    cout<<"number of moves: "<<moves;
}