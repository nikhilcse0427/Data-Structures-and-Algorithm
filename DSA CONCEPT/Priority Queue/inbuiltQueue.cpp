#include<iostream>
using namespace std;
#include<Queue>
int main(){
  priority_queue<int,vector<int>,greater<int>>q;
  q.push(85);
  q.push(75);
  q.push(36);
  q.push(78);
  q.push(45);
  q.push(89);
  q.push(25);
  q.push(15);
  q.push(10);
  q.push(98);
  q.push(99);
  cout<<q.top();
  return 0;
}