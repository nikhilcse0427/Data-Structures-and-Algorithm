//DECLARATION INSIDE AND DEFINATION OUTSIDE THE CLASS
#include<iostream>
using namespace std;
class space{
    int x;
    int y;
    int z;
    public:
        void getdata(int a,int b,int c);
        void display(void);
        void operator -(); //OPERATOR OVERLOADING declare
};
void space::getdata(int a,int b,int c){
    x=a;
    y=b;
    z=c;
}
void space::display(void){
    cout<<x<<" ";
    cout<<y<<" ";
    cout<<z<<"\n";
}
void space::operator-(){  //DEFINE OVERLOADED FUNCTION
    x=-x;
    y=-y;
    z=-z;
};
int main(){
    space s;
    s.getdata(10,-20,30);
    cout<<"s ";
    s.display();
    -s;
    cout<<"s ";
    s.display();
    return 0;
}