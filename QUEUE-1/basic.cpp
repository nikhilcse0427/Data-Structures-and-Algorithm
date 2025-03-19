#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    while(!q.front()){
        cout<<q.front();
        int val=q.front();
        q.back()=val;
        q.pop();
    }
    return 0;
}