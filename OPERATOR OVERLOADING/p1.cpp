#include<iostream>
using namespace std;
class point{
    int x;
    int y;
    public:
        point(){
        x=0;
        y=0;
        }
    point(int i, int j){
        x=i;
        y=j;
    }
    point operator -();
    void display(){
        cout<<"\t"<<y;
    }
};
point point::operator-(){
    x=-x;
    y=-y;
}
int main(){
    point o1(10,10);
    -o1;
    o1.display();
    return 0;
}