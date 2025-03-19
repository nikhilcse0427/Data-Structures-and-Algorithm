#include<iostream>
using namespace std;
class Pokeman{
    public:
    string type;
    int attack;
    Pokeman(string type,int attack){
        this->type=type;
        this->attack=attack;
    }
};
int main(){
    Pokeman pikachu("electric",80);
    Pokeman charizard("fire",120);
    cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    cout<<charizard.type<<" "<<charizard.attack;
    return 0;
}