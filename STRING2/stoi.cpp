#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="123456789";
    int x = stoi(str);//stoi converts string to int
    cout<<x+1;
    int a =123456789;
    string s = to_string(a);//to_string converts int into string
    cout<<endl;
    cout<<s;
    long long y = stoll(str);
    cout<<endl;
    cout<<y;
    return 0;
}