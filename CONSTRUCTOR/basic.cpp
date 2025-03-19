#include<iostream>
using namespace std;
class complex{
    public:
        int a,b;
    complex(int x,int y){       //PARAMETERIZED CONSTRUCTOR
        a=x;
        b=y;
    }
    complex(int z){
        a=z;
    }
    complex(){                   //DEFAULT CONSTRUCTOR
        cout<<"Hello world";
    }
};
int main(){
    complex c1(10,20),c2(30),c3();
    return 0;
}