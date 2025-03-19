#include<iostream>
using namespace std;
class Pokemon{
private:
    int attack;
public:
    string type;
    void set(int val){  //SETTER
        attack=val;
    }
    int get(){    //GETTER
        return attack;
    }
};
int main(){
    Pokemon pikachu;
    pikachu.set(90);
    cout<<pikachu.get();
    return 0;
}