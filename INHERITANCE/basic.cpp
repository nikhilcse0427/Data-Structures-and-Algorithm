#include<iostream>
using namespace std;
class base{
    private:
        int base_a;
    protected:
        int base_b;
    public:
        void base_set();
};
class derived : public base{
    private:
        int derived_a;
    protected:
        int derived_b;
    public:
        void derived_set();
};
int main(){

    return 0;
}