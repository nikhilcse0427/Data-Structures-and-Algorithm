#include<iostream>
using namespace std;
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}


int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }
    if(b<a && b<c){
        return b;
    }
    else{
        return c;
    }
}


int min(float a,float b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout<<min(9.8,100);
    return 0;
}