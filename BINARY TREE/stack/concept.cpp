#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(185);
    s.push(90);
    s.push(95);
    cout<<s.size()<<endl;
    stack<int>temp;
    while(s.size()>0){
        cout<<s.top()<<" ";
        temp.push(s.top());
        s.pop();
    }

    return 0;
}