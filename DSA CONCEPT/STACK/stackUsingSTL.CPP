#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s1;
    cout<<s1.empty();//answer 1 means true
    s1.push(1);
    cout<<endl;
    cout<<s1.empty();
    s1.pop();
    cout<<endl;
    cout<<s1.empty();

}