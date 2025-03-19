#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-')return 1;
    else if(ch=='*'|| ch=='/')return 2;
    else return -1;
}
float solve(int val1, int val2,char ch){
    if(ch=='+')return val1+val2;
    if(ch=='-')return val1-val2;
    if(ch=='*')return val1*val2;
    if(ch=='/')return val1/val2;
}
int main(){
    string s="2*4/8+4-3+9";
    stack<int>val;
    stack<int>op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48  && s[i]<=57){//ASCII VALUE 0-9 = 48 -57
            val.push(s[i]-48);
        }
        else{
            if(op.empty() || prio(s[i])>prio(op.top())){
                op.push(s[i]);
            }
            else{
              while(!op.empty() && prio(s[i])<=prio(op.top()) ){
                char ch = op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1,val2,ch);
                val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
        while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
    return 0;
}