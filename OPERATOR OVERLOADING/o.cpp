#include<iostream>
using namespace std;
class speed{
    int distance;
    int time;
    public:
        speed(int d, int t){
            distance = d;
            time = t;
        }
        int operator/(speed &other){
            return distance/other.time;
        }
};
int main(){
    int l1,l2,b1,b2;
    cin>>l1>>l2>>b1>>b2;
    speed s1(l1,b1);
    speed s2(l2,b2);
    int speed=s1/s2;
    cout<<speed;
}