#include<iostream>
using namespace std;
class Pokemon{
    private:
        string type;
        int attack;
        public:
        Pokemon(string type,int attack){
            this->type=type;
            this->attack=attack;
        }
        string getType(){
            return type;
        }
};
int main(){
    Pokemon pikachu("water",100);
    cout<<pikachu.getType();
}